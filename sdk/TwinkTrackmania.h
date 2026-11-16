#pragma once

// Offsets for various things
#include "Offsets.h"

// Various types used by Trackmania
#include "TMTypes.h"

// Useful for realloc
#include <cstdlib>

#include <type_traits>

#include <cassert>

// The Trackmania manager class, used by (TwinkTrackmania gTwinkie.TrackmaniaMgr).
class TwinkTrackmania
{
public:
	uintptr_t ExeBaseAddr = 0;

	// Behaviors

	// Ctor
	__declspec(noinline) TwinkTrackmania();
	// Dtor
	__declspec(noinline) virtual ~TwinkTrackmania();
};