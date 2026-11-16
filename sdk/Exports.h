#pragma once

#include "IModule.h"
#include "ILoggert.h"
#include "Arch.h"
#pragma comment(lib, "Twinkie" TWINKIEX_GAME ".lib")
#include "imgui/imgui.h"
#include "minhook/include/MinHook.h"

using ModuleCreateFn = IModule * (*)(TwinkTrackmania*, ILoggert*);

extern __declspec(dllimport) void AddModuleToQueue(ModuleCreateFn CreateModuleFn);