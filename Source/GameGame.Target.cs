using UnrealBuildTool;

public class GameGameTarget : TargetRules {
	public GameGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
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
