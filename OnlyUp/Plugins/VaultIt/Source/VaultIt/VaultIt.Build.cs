// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VaultIt : ModuleRules
{
	public VaultIt(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "GameplayAbilities",
                "GameplayTasks",
                "GameplayTags",
                "MotionWarping",
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"NetCore",
			}
			);
	}
}
