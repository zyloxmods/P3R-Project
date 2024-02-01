#include "HandwritingSubsystem.h"

AHandwritingSpawner* UHandwritingSubsystem::SpawnHandwritingAttachedNpc(EAtlHandwritingGroupType GroupType, EAtlEvtHandwritingType Type, ANpcBaseCore* NpcBase, FName AttachSocketName, EHandwritingSpawnRules InSpawnRule, const FAtlHandwritingNiagaraRequestParam& InParam, bool bAutoDestroySpawner, bool InbLoop) {
    return NULL;
}

AHandwritingSpawner* UHandwritingSubsystem::SpawnHandwritingAttached(EAtlHandwritingGroupType GroupType, EAtlEvtHandwritingType Type, ACharacter* Character, FName AttachSocketName, EHandwritingSpawnRules InSpawnRule, const FAtlHandwritingNiagaraRequestParam& InParam, bool bAutoDestroySpawner, bool InbLoop) {
    return NULL;
}

AHandwritingSpawner* UHandwritingSubsystem::SpawnHandwritingAtLocation(const UObject* WorldContextObject, EAtlHandwritingGroupType GroupType, EAtlEvtHandwritingType Type, const FAtlHandwritingNiagaraRequestParam& InParam, bool bAutoDestroySpawner, bool InbLoop) {
    return NULL;
}

bool UHandwritingSubsystem::IsPolandLanguage() {
    return false;
}

bool UHandwritingSubsystem::GetAdjustedWoofLayoutData(FVector& OutPosition1, FVector& OutPosition2, FVector& OutPosition3, FVector& OutPosition4) {
    return false;
}

bool UHandwritingSubsystem::GetAdjustedWhineLayoutData(FVector& OutPosition, FVector& OutScale, float& OutSize) {
    return false;
}

bool UHandwritingSubsystem::GetAdjustedQuestionLayoutData(FVector& OutPosition1, FVector& OutPosition2, FVector& OutPosition3) {
    return false;
}

bool UHandwritingSubsystem::GetAdjustedLayoutScale(EHandwritingLayout InIndex, float& OutScale) {
    return false;
}

bool UHandwritingSubsystem::GetAdjustedLayoutRotation(EHandwritingLayout InIndex, float& OutAngle) {
    return false;
}

bool UHandwritingSubsystem::GetAdjustedLayoutPosition(EHandwritingLayout InIndex, FVector& OutPosition) {
    return false;
}

bool UHandwritingSubsystem::GetAdjustedLayoutData(EHandwritingLayout InIndex, FVector& OutPosition, float& OutAngle, float& OutScale) {
    return false;
}

bool UHandwritingSubsystem::GetAdjustedExclamationQuestionLayoutData(FVector& OutPosition1, FVector& OutPosition2, FVector& OutScale, float& OutScaleFloat) {
    return false;
}

bool UHandwritingSubsystem::GetAdjustedDoubleExclamationLayoutData(FVector& OutPosition1, FVector& OutPosition2) {
    return false;
}

bool UHandwritingSubsystem::GetAdjustedCallingLayoutData(float& OutScale1, float& OutScale2, float& OutScale3) {
    return false;
}

bool UHandwritingSubsystem::GetAdjustedAllLayoutData(EHandwritingLayout InIndexPosRot, FVector& OutPosition, float& OutAngle, EHandwritingLayout InIndexScale, FVector& OutScale, float& OutSize) {
    return false;
}

UHandwritingSubsystem::UHandwritingSubsystem() {
    this->HandwritingDataAsset = NULL;
    this->HandwritingSpawnerDefaultClass = NULL;
    this->LayoutDataTable = NULL;
}

