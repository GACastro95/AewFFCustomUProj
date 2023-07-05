using UnrealBuildTool;

public class ELITE : ModuleRules {
    public ELITE(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ABP_200508",
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
