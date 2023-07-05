using UnrealBuildTool;

public class Creation : ModuleRules {
    public Creation(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "DeveloperSettings",
            "ELITE_Core",
            "ELITE_Game",
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
