// Copyright 2010-2014, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#import "base/mac_util.h"

#import <Foundation/Foundation.h>

#include <CoreFoundation/CoreFoundation.h>

#include "base/const.h"
#include "base/logging.h"
#include "base/scoped_cftyperef.h"
#include "base/singleton.h"
#include "base/util.h"

namespace mozc {
namespace {
const char kServerDirectory[] =
    "/Library/Input Methods/" kProductPrefix ".app/Contents/Resources";
const unsigned char kPrelauncherPath[] =
    "/Library/Input Methods/" kProductPrefix ".app/Contents/Resources/"
    kProductPrefix "Prelauncher.app";

#ifdef GOOGLE_JAPANESE_INPUT_BUILD
const char kProjectPrefix[] =
    "com.google.inputmethod.Japanese.";
#elif defined(MOZC_BUILD)
const char kProjectPrefix[] =
    "org.mozc.inputmethod.Japanese.";
#else
#error Unknown branding
#endif

}  // anonymous namespace

string MacUtil::GetLabelForSuffix(const string &suffix) {
  return string(kProjectPrefix) + suffix;
}

string MacUtil::GetApplicationSupportDirectory() {
  NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
  string dir;
  NSArray *paths = NSSearchPathForDirectoriesInDomains(
      NSApplicationSupportDirectory, NSUserDomainMask, YES);
  if ([paths count] > 0) {
    dir.assign([[paths objectAtIndex:0] fileSystemRepresentation]);
  }
  [pool drain];
  return dir;
}

string MacUtil::GetLoggingDirectory() {
  NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
  string dir;
  NSArray *paths = NSSearchPathForDirectoriesInDomains(
      NSLibraryDirectory, NSUserDomainMask, YES);
  if ([paths count] > 0) {
    dir.assign(
        [[[[paths objectAtIndex:0] stringByAppendingPathComponent:@"Logs"]
           stringByAppendingPathComponent:@kProductPrefix]
          fileSystemRepresentation]);
  }
  [pool drain];
  return dir;
}

string MacUtil::GetOSVersionString() {
  NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
  string version;
  version.assign([[[NSProcessInfo processInfo] operatingSystemVersionString]
                  cStringUsingEncoding : NSUTF8StringEncoding]);
  [pool drain];
  return version;
}

namespace {

class OSVersionCache {
 public:
  OSVersionCache() : succeeded_(false) {
    NSOperatingSystemVersion operatingSystemVersion = [[NSProcessInfo processInfo] operatingSystemVersion];
    major_version_ = (int32)operatingSystemVersion.majorVersion;
    minor_version_ = (int32)operatingSystemVersion.minorVersion;
    fix_version_ = (int32)operatingSystemVersion.patchVersion;
    succeeded_ = true;
  }
  bool GetOSVersion(int32 *major, int32 *minor, int32 *fix) const {
    if (!succeeded_) {
      return false;
    }
    *major = major_version_;
    *minor = minor_version_;
    *fix = fix_version_;
    return true;
  }

 private:
  SInt32 major_version_;
  SInt32 minor_version_;
  SInt32 fix_version_;
  bool succeeded_;
};

}  // namespace

bool MacUtil::GetOSVersion(int32 *major, int32 *minor, int32 *fix) {
  return Singleton<OSVersionCache>::get()->GetOSVersion(major, minor, fix);
}

bool MacUtil::OSVersionIsGreaterOrEqual(int32 major, int32 minor, int32 fix) {
  int32 major_version = 0;
  int32 minor_version = 0;
  int32 fix_version = 0;

  if (!GetOSVersion(&major_version, &minor_version, &fix_version)) {
    return false;
  }
  if ((major_version > major) ||
      ((major_version == major) &&
           ((minor_version > minor) ||
            ((minor_version == minor) && (fix_version >= fix))))) {
    return true;
  }
  return false;
}

string MacUtil::GetServerDirectory() {
  return kServerDirectory;
}

string MacUtil::GetResourcesDirectory() {
  NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
  string result;

  NSBundle *mainBundle = [NSBundle mainBundle];
  if (mainBundle) {
    NSString *resourcePath = [mainBundle resourcePath];
    if (resourcePath) {
      result.assign([resourcePath fileSystemRepresentation]);
    }
  }
  [pool drain];
  return result;
}

string MacUtil::GetSerialNumber() {
  return "C02HX2FFDKQ5";
}

bool MacUtil::StartLaunchdService(const string &service_name,
                                  pid_t *pid) {
  return false;
}

bool MacUtil::CheckPrelauncherLoginItemStatus() {
  return false;
}

void MacUtil::RemovePrelauncherLoginItem() {

}

void MacUtil::AddPrelauncherLoginItem() {

}

bool MacUtil::GetFrontmostWindowNameAndOwner(string *name, string *owner) {
  return false;
}

bool MacUtil::IsSuppressSuggestionWindow(const string &name,
                                         const string &owner) {
  // TODO(horo): Make a function to check the name, then share it with the
  //             Windows client.
  // Currently we don't support "Firefox", because in Firefox "activateServer:"
  // of IMKStateSetting Protocol is not called when the user changes the
  // browsing tab.
  return (("Google Chrome" == owner) ||
          ("Safari" == owner)) &&
         (("Google" == name) ||
          Util::EndsWith(
              name,
              " - Google \xE6\xA4\x9C\xE7\xB4\xA2") ||  // " - Google 検索"
          Util::EndsWith(name, " - Google Search"));
}

}  // namespace mozc
