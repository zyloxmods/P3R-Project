using UnrealBuildTool;

public class P3REditorTarget : TargetRules {
	public P3REditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"ArcAssetPlugin",
			"xrd777",
		});
	}
}
