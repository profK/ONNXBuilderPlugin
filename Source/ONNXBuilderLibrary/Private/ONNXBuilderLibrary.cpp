// Copyright Epic Games, Inc. All Rights Reserved.

#include "ONNXBuilderLibrary.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#pragma warning( push )
#pragma warning( disable : 4668 )
#include "ONNXBuilderLibraryLibrary/ProtoBufLib/ONNXModel.h"
#pragma warning( pop )

#define LOCTEXT_NAMESPACE "FONNXBuilderLibraryModule"

void FONNXBuilderLibraryModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	// Get the base directory of this plugin
	FString BaseDir = IPluginManager::Get().FindPlugin("ONNXBuilderLibrary")->GetBaseDir();

	// Add on the relative location of the third party dll and load it
	FString LibraryPath;
#if PLATFORM_WINDOWS
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/ONNXBuilderLibraryLibrary/Win64/ONNXModel.dll"));
#elif PLATFORM_MAC
    LibraryPath = FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/ONNXBuilderLibraryLibrary/Mac/Release/ONNXModel.dylib"));
#elif PLATFORM_LINUX
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/ONNXBuilderLibraryLibrary/Linux/x86_64-unknown-linux-gnu/libONNXModel.so"));
#endif // PLATFORM_WINDOWS

	ExampleLibraryHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;

	if (ExampleLibraryHandle)
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryLoaded", "Loaded ONNX third party library"));
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Failed to load ONNX third party library"));
	}
}

void FONNXBuilderLibraryModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	// Free the dll handle
	FPlatformProcess::FreeDllHandle(ExampleLibraryHandle);
	ExampleLibraryHandle = nullptr;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FONNXBuilderLibraryModule, ONNXBuilderLibrary)
