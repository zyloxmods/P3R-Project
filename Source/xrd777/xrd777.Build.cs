using UnrealBuildTool;

public class xrd777 : ModuleRules {
    public xrd777(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "AnimationCore",
            "ArcAssetPlugin",
            "AudioExtensions",
            "AudioMixer",
            "AudioPlatformConfiguration",
            "BfAssetPlugin",
            "BmdAssetPlugin",
            "CharacterBase",
            "CinematicCamera",
            "ClothingSystemRuntimeInterface",
            "Core",
            "CoreUObject",
            "CriWareAdxLipSync",
            "CriWareRuntime",
            "DebugMenuPlugin",
            "DeveloperSettings",
            "Engine",
            "FontStyleAssetPlugin",
            "GameplayCameras",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "InputManagerPlugin",
            "Landscape",
            "LevelSequence",
            "McaAssetPlugin",
            "MediaAssets",
            "MediaUtils",
            "MeshDescription",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
            "OffscreenRendering",
            "PacketHandler",
            "PakFileManager",
            "PhysicsCore",
            "PlgAssetPlugin",
            "PropertyAccess",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "SoundManager",
            "SprAssetPlugin",
            "StaticMeshDescription",
            "TemplateSequence",
            "UMG",
            "UimAssetPlugin",
        });
    }
}
