// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FuzzyCaulifula : ModuleRules
{
	public FuzzyCaulifula(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
