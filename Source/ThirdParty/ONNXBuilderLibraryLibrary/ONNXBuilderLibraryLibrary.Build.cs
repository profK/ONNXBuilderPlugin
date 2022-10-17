// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class ONNXBuilderLibraryLibrary : ModuleRules
{
	public string GetUProjectPath()
	{
		//Change this according to your module's relative location to your project file. If there is any better way to do this I'm interested!
		//Assuming Source/ThirdParty/YourLib/
		return Directory.GetParent(ModuleDirectory).Parent.Parent.ToString();
	}

    private void CopyToBinaries(string Filepath, ReadOnlyTargetRules Target)
    {
        string binariesDir = Path.Combine(GetUProjectPath(), "Binaries", Target.Platform.ToString());
        string filename = Path.GetFileName(Filepath);

        if (!Directory.Exists(binariesDir))
            Directory.CreateDirectory(binariesDir);

        if (!File.Exists(Path.Combine(binariesDir, filename)))
            File.Copy(Filepath, Path.Combine(binariesDir, filename), true);
    }
	public ONNXBuilderLibraryLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			// Add the import library
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "ONNXModel.lib"));

			// Delay-load the DLL, so we can load it from the right place first
			PublicDelayLoadDLLs.Add("ExampleLibrary.dll");

			// Ensure that the DLL is staged along with the executable
			RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/ONNXBuilderLibraryLibrary/Win64/ONNXModel.dll");
			RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/ONNXBuilderLibraryLibrary/Win64/libprotobuf.dll");
			RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/ONNXBuilderLibraryLibrary/Win64/libprotobuf-lite.dll");
			RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/ONNXBuilderLibraryLibrary/Win64/zlib1.dll");
		}
        else if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            PublicDelayLoadDLLs.Add(Path.Combine(ModuleDirectory, "Mac", "Release", "libExampleLibrary.dylib"));
            RuntimeDependencies.Add("$(PluginDir)/Source/ThirdParty/ONNXBuilderLibraryLibrary/Mac/Release/libONNXModel.dylib");
        }
        else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			string ExampleSoPath = Path.Combine("$(PluginDir)", "Binaries", "ThirdParty", "ONNXBuilderLibraryLibrary", "Linux", "x86_64-unknown-linux-gnu", "libONNXModel.so");
			PublicAdditionalLibraries.Add(ExampleSoPath);
			PublicDelayLoadDLLs.Add(ExampleSoPath);
			RuntimeDependencies.Add(ExampleSoPath);
		}
		
		CopyToBinaries(ModuleDirectory + 
		    "/x64/Release/libprotobuf.dll", Target);
		CopyToBinaries(ModuleDirectory + 
        		    "/x64/Release/libprotobuf-lite.dll", Target);
        CopyToBinaries(ModuleDirectory + 
                    "/x64/Release/zlib1.dll", Target);
	}
}
