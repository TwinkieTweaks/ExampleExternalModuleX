# ExampleExternalModuleX

A template used for making C++ modules for [TwinkieX](https://github.com/TwinkieTweaks/TwinkieX)

## Project layout

```
ExampleExternalModuleX/
├── src/          Your module: dllmain.cpp (the module itself) and the precompiled header (pch.h, pch.cpp, framework.h)
├── sdk/          TwinkieX module API: IModule, ILoggert, Exports, Offsets, TMTypes, TwinkTrackmania, TMText/
├── vendor/imgui/ Dear ImGui headers
├── lib/          TwinkieX import library to link against (Twinkie<GAME>.lib)
└── ExampleExternalModuleX.sln / .vcxproj
```

`src`, `sdk` and `vendor` are on the include path and `lib` is on the library path, so includes like `"pch.h"`, `"Offsets.h"` and `"imgui/imgui.h"` work from any folder.
