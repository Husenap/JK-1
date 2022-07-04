//------------------------------------------------------------------------
// Copyright(c) 2022 My Plug-in Company.
//------------------------------------------------------------------------

#pragma once

#include "pluginterfaces/base/funknown.h"
#include "pluginterfaces/vst/vsttypes.h"

namespace MyCompanyName {
//------------------------------------------------------------------------
static const Steinberg::FUID kJK_1ProcessorUID(0x11DCA11F,
                                               0x895A5EF4,
                                               0xB0EDDB6B,
                                               0x1E77E10A);
static const Steinberg::FUID kJK_1ControllerUID(0x2223174E,
                                                0x61995E31,
                                                0x8ED072F3,
                                                0xB2119977);

#define JK_1VST3Category "Fx"

//------------------------------------------------------------------------
}  // namespace MyCompanyName
