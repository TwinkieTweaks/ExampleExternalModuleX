# ExampleExternalModuleX

A template used for making C++ modules for [TwinkieX](https://github.com/TwinkieTweaks/TwinkieX)

## Project layout

```
ExampleExternalModuleX/
├── src/          Your module: dllmain.cpp (the module itself) and the precompiled header (pch.h, pch.cpp, framework.h)
├── sdk/          TwinkieX module API: IModule, ILoggert, Exports, Offsets, TMTypes, TwinkTrackmania, TMText/
├── vendor/       Headers for library functions
├── lib/          TwinkieX import library to link against (Twinkie<GAME>.lib)
└── ExampleExternalModuleX.sln / .vcxproj
```
