using UnrealBuildTool;

public class ELITE_Game : ModuleRules {
    public ELITE_Game(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "DeveloperSettings",
            "ELITE_Core",
            "Engine",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
