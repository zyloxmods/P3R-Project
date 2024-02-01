#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MovieSceneObjectBindingID.h"
#include "AtlSlotMultiAnimationParam.h"
#include "ECldSeason.h"
#include "EEvtCharaAnimationSlotType.h"
#include "EEvtCharaAnimationType.h"
#include "EEvtConditionalBranchCompType.h"
#include "BFLEventMovieScene.generated.h"

class AActor;
class AAtlEvtEventManager;
class ALevelSequenceActor;
class UAnimInstance;
class UAnimMontage;
class UAnimSequenceBase;
class ULevelStreaming;
class UObject;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class XRD777_API UBFLEventMovieScene : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBFLEventMovieScene();
    UFUNCTION(BlueprintCallable)
    static void StopSlotAnimation(UAnimInstance* AnimInstance, float BlendOutTime, FName SlotNodeName);
    
    UFUNCTION(BlueprintCallable)
    static USkeletalMeshComponent* SkeletalMeshComponentFromObject(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNearClipPlane(const UObject* WorldContextObject, float NearClipCm);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEnableStreamingTexture(const UObject* WorldContextObject, bool bEnable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetNearClipPlane(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* PlaySlotOffsetAnimationAsDynamicMontageLoop(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* Asset, FName SlotNodeName, float StartOffsetTime, float EndOffsetTime, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* PlaySlotMultiAnimationOffsetAsDynamicMontageTwo(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* BaseAnimAsset, UAnimSequenceBase* LoopAsset, FName SlotNodeName, float StartOffsetTime, float EndOffsetTime, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* PlaySlotMultiAnimationOffsetAsDynamicMontage(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* BaseAnimAsset, TArray<FAtlSlotMultiAnimationParam>& AnimAssets, FName SlotNodeName, EEvtCharaAnimationType EvtCharaAnimationType, float StartOffsetTime, float EndOffsetTime, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* PlaySlotMultiAnimationAsDynamicMontage(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* BaseAnimAsset, TArray<FAtlSlotMultiAnimationParam>& AnimAssets, FName SlotNodeName, EEvtCharaAnimationType EvtCharaAnimationType, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* PlaySlotAnimationAsDynamicMontageTwo(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* Asset, UAnimSequenceBase* Asset2, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* PlaySlotAnimationAsDynamicMontageLoopSecOnLastFrame(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* Asset, FName SlotNodeName, float StartOffsetTime, float EndOffsetTime, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* PlaySlotAnimationAsDynamicMontageLoopOnLastFrame(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* PlaySlotAnimationAsDynamicMontageLoop(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable)
    static FName MakeSeasonSublevel(int32 FieldMajorID, int32 FieldMinorID, ECldSeason Season, bool bStreamingPath);
    
    UFUNCTION(BlueprintCallable)
    static void LoadSublevel(const FString& SublevelName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCondition(EEvtConditionalBranchCompType CompareType, int32 LHS, int32 RHS);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneObjectBindingID GetBindingID(ALevelSequenceActor* SequenceActor, const FString& ObjectDisplayName);
    
    UFUNCTION(BlueprintCallable)
    static FName GetAnimationSlotName(EEvtCharaAnimationSlotType SlotType);
    
    UFUNCTION(BlueprintCallable)
    static ALevelSequenceActor* FindLevelSequenceActor(ULevelStreaming* TargetLevelStreaming);
    
    UFUNCTION(BlueprintCallable)
    static AAtlEvtEventManager* FindAtlEvtEventManager(ULevelStreaming* TargetLevelStreaming);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* CreateSlotOffsetAnimationAsDynamicMontage(USkeletalMesh* Mesh, UAnimSequenceBase* Asset, FName SlotNodeName, float StartOffsetTime, float EndOffsetTime, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* CreateSlotAnimationAsDynamicMontage(USkeletalMesh* Mesh, UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable)
    static int32 AllActorBinding(AActor* BindingActor, const FString& TargetName);
    
    UFUNCTION(BlueprintCallable)
    static void AddViewSlaveLocation(const FVector& Location, float BoostFactor, bool bOverrideLocation, float Duration);
    
protected:
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* AddPlayEvtMultiMontageAnimNotify(int32 Index, UAnimMontage* NewMontage, const TArray<FAtlSlotMultiAnimationParam>& AnimAssets, FName SlotNodeName, EEvtCharaAnimationType EvtCharaAnimationType, float CurrentMontageBlendOut, float NextMontageBlendIn);
    
};

