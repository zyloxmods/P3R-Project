using UnrealBuildTool;

public class P3RGameTarget : TargetRules {
	public P3RGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"ArcAssetPlugin",
			"xrd777",
		});
	}
}
