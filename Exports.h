#pragma once

#include "IModule.h"
#include "Arch.h"
#pragma comment(lib, "Twinkie" GAME ".lib")
#include "imgui/imgui.h"

using ModuleCreateFn = IModule * (*)(TwinkTrackmania*, ImGuiContext*);
extern __declspec(dllimport) void AddModuleToQueue(ModuleCreateFn CreateModuleFn);