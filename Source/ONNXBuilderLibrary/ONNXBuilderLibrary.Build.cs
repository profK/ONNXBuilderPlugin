// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ONNXBuilderLibrary : ModuleRules
{
	public ONNXBuilderLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				//"ThirdParty/ONNXBuilderLibraryLibrary/ProtoBufLib/ONNX",
				//"ThirdParty/ONNXBuilderLibraryLibrary/ProtoBufLib/third_paty/protobuf/include"
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"ThirdParty/ONNXBuilderLibraryLibrary/ProtoBufLib/ONNX",
				"ThirdParty/ONNXBuilderLibraryLibrary/ProtoBufLib/third_paty/protobuf/include"
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"ONNXBuilderLibraryLibrary",
				"Projects"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				
			}
			);
	}
}
