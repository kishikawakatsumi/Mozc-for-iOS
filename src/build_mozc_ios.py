#!/usr/bin/env python

import sys
import os

from build_tools.util import RunOrDie

def BuildOniOS():
  RunOrDie(['xcodebuild', '-project', 'base/base.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'composer/composer.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'config/config.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'converter/converter.xcodeproj', '-configuration', "Release", '-target', "converter"])
  RunOrDie(['xcodebuild', '-project', 'converter/converter_base.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'data_manager/data_manager.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'data_manager/oss/oss_data_manager.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'data_manager/oss/oss_data_manager_base.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'dictionary/dictionary.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'dictionary/dictionary_base.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'dictionary/file/dictionary_file.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'dictionary/system/system_dictionary.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'engine/engine.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'prediction/prediction.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'prediction/prediction_base.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'protobuf/protobuf.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'rewriter/rewriter.xcodeproj', '-configuration', "Release", '-target', "rewriter"])
  RunOrDie(['xcodebuild', '-project', 'rewriter/rewriter_base.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'rewriter/calculator/calculator.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'session/session.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'session/session_base.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'storage/storage.xcodeproj', '-configuration', "Release", '-target', "storage"])
  RunOrDie(['xcodebuild', '-project', 'storage/louds/louds.xcodeproj', '-configuration', "Release", '-target', "All"])
  RunOrDie(['xcodebuild', '-project', 'transliteration/transliteration.xcodeproj', '-configuration', "Release", '-target', "transliteration"])
  RunOrDie(['xcodebuild', '-project', 'usage_stats/usage_stats.xcodeproj', '-configuration', "Release", '-target', "usage_stats_uploader"])
  RunOrDie(['xcodebuild', '-project', 'usage_stats/usage_stats_base.xcodeproj', '-configuration', "Release", '-target', "All"])

if __name__ == '__main__':
  BuildOniOS()
