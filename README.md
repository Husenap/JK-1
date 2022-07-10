[![build](https://github.com/Husenap/JK-1/actions/workflows/build.yml/badge.svg)](https://github.com/Husenap/JK-1/actions/workflows/build.yml)

# JK-1

## An experimental VST Plugin



# Getting Started

### Generate and build the project using the scripts
```bash
> scripts/gen
> scripts/build
```

### Generate and build using pure cmake
```bash
> cmake . -B.build
> cmake --build .build/
```

### The VST file will end up in the output folder
`.build/VST3/Debug/JK-1.vst3/Contents/x86_64-win/JK-1.vst3`