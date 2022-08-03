// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CookBook_Ch13 : ModuleRules
{
	public CookBook_Ch13(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
		PublicDependencyModuleNames.AddRange(new string[] { "AIModule", "GameplayTasks" });
	}
}
