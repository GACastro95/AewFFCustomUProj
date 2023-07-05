using UnrealBuildTool;

public class GameEditorTarget : TargetRules {
	public GameEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"ABP_200508",
			"Creation",
			"ELITE",
			"ELITE_Core",
			"ELITE_Game",
			"ELITE_LoadingScreen",
			"OnlineSubsystemSteam",
		});
	}
}
