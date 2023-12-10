#pragma once
#include "GlobalShader.h"
#include "../../../../../../../Source/Runtime/Renderer/Public/ScreenPass.h"

BEGIN_SHADER_PARAMETER_STRUCT(FUVMaskShaderParameters, )
SHADER_PARAMETER_RDG_TEXTURE(Texture2D, InputTexture)
SHADER_PARAMETER_RDG_TEXTURE(Texture2D, SceneColor)
SHADER_PARAMETER_RDG_TEXTURE_SRV(Texture2D<uint2>, InputStencilTexture)
SHADER_PARAMETER_SAMPLER(SamplerState, InputSampler)
SHADER_PARAMETER_STRUCT(FScreenPassTextureViewportParameters, ViewParams)//ע���@����Ҫ��UniformBuffer
RENDER_TARGET_BINDING_SLOTS()
END_SHADER_PARAMETER_STRUCT()

class FUVMaskShaderPS : public FGlobalShader {
public:
	DECLARE_EXPORTED_SHADER_TYPE(FUVMaskShaderPS, Global, );

	SHADER_USE_PARAMETER_STRUCT(FUVMaskShaderPS, FGlobalShader);
	//��������ذѲ����ṹ���������У�����Ҫ���������using
	using FParameters = FUVMaskShaderParameters;
};

BEGIN_SHADER_PARAMETER_STRUCT(FCombineShaderParameters, )
SHADER_PARAMETER(FLinearColor, Color)
SHADER_PARAMETER_RDG_TEXTURE(Texture2D, SceneColor)
SHADER_PARAMETER_RDG_TEXTURE(Texture2D, InputTexture)
SHADER_PARAMETER_SAMPLER(SamplerState, InputSampler)
SHADER_PARAMETER_STRUCT(FScreenPassTextureViewportParameters, ViewParams)
RENDER_TARGET_BINDING_SLOTS()
END_SHADER_PARAMETER_STRUCT()

class FCombineShaderPS : public FGlobalShader {
public:
	DECLARE_EXPORTED_SHADER_TYPE(FCombineShaderPS, Global, );
	using FParameters = FCombineShaderParameters;
	SHADER_USE_PARAMETER_STRUCT(FCombineShaderPS, FGlobalShader);
};