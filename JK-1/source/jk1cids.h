//------------------------------------------------------------------------
// Copyright(c) 2022 HJ.
//------------------------------------------------------------------------

#pragma once

#include "pluginterfaces/base/funknown.h"
#include "pluginterfaces/vst/vsttypes.h"

namespace jk1 {
//------------------------------------------------------------------------
static const Steinberg::FUID kJK1ProcessorUID(0x359EA1C4,
                                              0xBC6B5FEC,
                                              0x9567A516,
                                              0xEA4FF64A);
static const Steinberg::FUID kJK1ControllerUID(0x629B9CD5,
                                               0xBE345626,
                                               0x95DF0C43,
                                               0xCBBBC7E9);

#define JK1VST3Category "Instrument"

//------------------------------------------------------------------------
}  // namespace jk1
