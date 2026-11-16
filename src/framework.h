#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

#include <sstream>

#define IMGUI_DEFINE_MATH_OPERATORS
#define IMGUI_API __declspec(dllimport)
#include "TMText/ImGuiTMText.h"
#include "TMText/TMText.h"
#include "imgui/imgui.h"

#include "Offsets.h"
#include "Exports.h"