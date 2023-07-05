using UnrealBuildTool;

public class ABP_200508 : ModuleRules {
    public ABP_200508(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "AnimationCore",
            "AnimationSharing",
            "ApexDestruction",
            "AudioMixer",
            "CableComponent",
            "Chaos",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "Creation",
            "CriWareRuntime",
            "DeveloperSettings",
            "ELITE_Core",
            "ELITE_Game",
            "Engine",
            "GameplayCameras",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "PhysXVehicles",
            "PhysicsCore",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "TemplateSequence",
            "UMG",
            "yEOSSDK",
            "yGS2Client",
        });
    }
}
