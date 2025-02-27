#pragma once

#include <inttypes.h>

namespace dxvk::caps {

  constexpr uint32_t MaxClipPlanes                = 6;
  constexpr uint32_t MaxSamplers                  = 16;
  constexpr uint32_t MaxStreams                   = 32;
  constexpr uint32_t MaxSimultaneousTextures      = 8;
  constexpr uint32_t MaxTextureBlendStages        = MaxSimultaneousTextures;
  constexpr uint32_t MaxSimultaneousRenderTargets = 8; // TEMP

  constexpr uint32_t MaxFloatConstantsVS          = 256;
  constexpr uint32_t MaxFloatConstantsPS          = 224;
  constexpr uint32_t MaxOtherConstants            = 16;
  constexpr uint32_t MaxFloatConstantsSoftware    = 8192;
  constexpr uint32_t MaxOtherConstantsSoftware    = 2048;

  constexpr uint32_t InputRegisterCount           = 16;

  constexpr uint32_t MaxTextureDimension          = 16384;
  constexpr uint32_t MaxMipLevels                 = 15;
  constexpr uint32_t MaxSubresources              = 15 * 6;

  constexpr uint32_t MaxTransforms                = 10 + 256;

  constexpr uint32_t TextureStageCount           = MaxSimultaneousTextures;

  constexpr uint32_t MaxEnabledLights             = 8;

  constexpr uint32_t MaxTexturesVS                = 4;
  constexpr uint32_t MaxTexturesPS                = 16;

}
