// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Door_Keyhole_Peek : ModuleRules
{
	public Door_Keyhole_Peek(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
