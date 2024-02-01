#include "BFLEventMovieScene.h"

void UBFLEventMovieScene::StopSlotAnimation(UAnimInstance* AnimInstance, float BlendOutTime, FName SlotNodeName) {
}

USkeletalMeshComponent* UBFLEventMovieScene::SkeletalMeshComponentFromObject(UObject* InObject) {
    return NULL;
}

void UBFLEventMovieScene::SetNearClipPlane(const UObject* WorldContextObject, float NearClipCm) {
}

void UBFLEventMovieScene::SetEnableStreamingTexture(const UObject* WorldContextObject, bool bEnable) {
}

void UBFLEventMovieScene::ResetNearClipPlane(const UObject* WorldContextObject) {
}

UAnimMontage* UBFLEventMovieScene::PlaySlotOffsetAnimationAsDynamicMontageLoop(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* Asset, FName SlotNodeName, float StartOffsetTime, float EndOffsetTime, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

UAnimMontage* UBFLEventMovieScene::PlaySlotMultiAnimationOffsetAsDynamicMontageTwo(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* BaseAnimAsset, UAnimSequenceBase* LoopAsset, FName SlotNodeName, float StartOffsetTime, float EndOffsetTime, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

UAnimMontage* UBFLEventMovieScene::PlaySlotMultiAnimationOffsetAsDynamicMontage(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* BaseAnimAsset, TArray<FAtlSlotMultiAnimationParam>& AnimAssets, FName SlotNodeName, EEvtCharaAnimationType EvtCharaAnimationType, float StartOffsetTime, float EndOffsetTime, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

UAnimMontage* UBFLEventMovieScene::PlaySlotMultiAnimationAsDynamicMontage(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* BaseAnimAsset, TArray<FAtlSlotMultiAnimationParam>& AnimAssets, FName SlotNodeName, EEvtCharaAnimationType EvtCharaAnimationType, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

UAnimMontage* UBFLEventMovieScene::PlaySlotAnimationAsDynamicMontageTwo(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* Asset, UAnimSequenceBase* Asset2, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

UAnimMontage* UBFLEventMovieScene::PlaySlotAnimationAsDynamicMontageLoopSecOnLastFrame(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* Asset, FName SlotNodeName, float StartOffsetTime, float EndOffsetTime, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

UAnimMontage* UBFLEventMovieScene::PlaySlotAnimationAsDynamicMontageLoopOnLastFrame(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

UAnimMontage* UBFLEventMovieScene::PlaySlotAnimationAsDynamicMontageLoop(UAnimInstance* AnimInstance, USkeletalMesh* Mesh, UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

FName UBFLEventMovieScene::MakeSeasonSublevel(int32 FieldMajorID, int32 FieldMinorID, ECldSeason Season, bool bStreamingPath) {
    return NAME_None;
}

void UBFLEventMovieScene::LoadSublevel(const FString& SublevelName) {
}

bool UBFLEventMovieScene::IsCondition(EEvtConditionalBranchCompType CompareType, int32 LHS, int32 RHS) {
    return false;
}

FMovieSceneObjectBindingID UBFLEventMovieScene::GetBindingID(ALevelSequenceActor* SequenceActor, const FString& ObjectDisplayName) {
    return FMovieSceneObjectBindingID{};
}

FName UBFLEventMovieScene::GetAnimationSlotName(EEvtCharaAnimationSlotType SlotType) {
    return NAME_None;
}

ALevelSequenceActor* UBFLEventMovieScene::FindLevelSequenceActor(ULevelStreaming* TargetLevelStreaming) {
    return NULL;
}

AAtlEvtEventManager* UBFLEventMovieScene::FindAtlEvtEventManager(ULevelStreaming* TargetLevelStreaming) {
    return NULL;
}

UAnimMontage* UBFLEventMovieScene::CreateSlotOffsetAnimationAsDynamicMontage(USkeletalMesh* Mesh, UAnimSequenceBase* Asset, FName SlotNodeName, float StartOffsetTime, float EndOffsetTime, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

UAnimMontage* UBFLEventMovieScene::CreateSlotAnimationAsDynamicMontage(USkeletalMesh* Mesh, UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

int32 UBFLEventMovieScene::AllActorBinding(AActor* BindingActor, const FString& TargetName) {
    return 0;
}

void UBFLEventMovieScene::AddViewSlaveLocation(const FVector& Location, float BoostFactor, bool bOverrideLocation, float Duration) {
}

UAnimMontage* UBFLEventMovieScene::AddPlayEvtMultiMontageAnimNotify(int32 Index, UAnimMontage* NewMontage, const TArray<FAtlSlotMultiAnimationParam>& AnimAssets, FName SlotNodeName, EEvtCharaAnimationType EvtCharaAnimationType, float CurrentMontageBlendOut, float NextMontageBlendIn) {
    return NULL;
}

UBFLEventMovieScene::UBFLEventMovieScene() {
}

