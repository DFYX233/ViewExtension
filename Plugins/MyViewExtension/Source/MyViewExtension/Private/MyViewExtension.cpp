// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyViewExtension.h"

#define LOCTEXT_NAMESPACE "FMyViewExtensionModule"

void FMyViewExtensionModule::StartupModule()
{
	FString BaseDir = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("MyViewExtension"));
	FString ModuleShaderDir = FPaths::Combine(BaseDir, TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/MyViewExtension"), ModuleShaderDir);
}

void FMyViewExtensionModule::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMyViewExtensionModule, MyViewExtension)