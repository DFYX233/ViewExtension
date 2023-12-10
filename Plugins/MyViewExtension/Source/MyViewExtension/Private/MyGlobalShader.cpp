#include "MyGlobalShader.h"

IMPLEMENT_SHADER_TYPE(, FCombineShaderPS, TEXT("/MyViewExtension/MyShaders.usf"), TEXT("CombineMainPS"), SF_Pixel);
IMPLEMENT_SHADER_TYPE(, FUVMaskShaderPS, TEXT("/MyViewExtension/MyShaders.usf"), TEXT("UVMaskMainPS"), SF_Pixel);