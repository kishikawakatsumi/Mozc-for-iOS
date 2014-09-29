Mozc-for-iOS
============

Mozc for iOS build

### Get the Code

```
$ git clone git@github.com:kishikawakatsumi/Mozc-for-iOS.git mozc_ios
```

### Build Instructions

#### Configuration

```
$ cd mozc_ios/src
$ python build_mozc.py gyp
```

#### Compilation

```
$ python build_mozc_ios.py
```

#### Artifacts

See `src/out_ios/Release-iphoneos`

### Limitation

Device build only, cannot run on the simulator.


### Sample Project

See https://github.com/kishikawakatsumi/JapaneseKeyboardKit
