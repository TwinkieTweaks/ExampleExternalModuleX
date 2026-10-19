#pragma once

#include "IModule.h"
#include "ILoggert.h"
#include "Arch.h"
#pragma comment(lib, "Twinkie" TWINKIEX_GAME ".lib")
#include "imgui/imgui.h"

using ModuleCreateFn = IModule * (*)(TwinkTrackmania*, ILoggert*);

extern __declspec(dllexport) void AddModuleToQueue(ModuleCreateFn CreateModuleFn);