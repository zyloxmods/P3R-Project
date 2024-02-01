#include "HandwritingSpawner.h"

void AHandwritingSpawner::RequestPlayEffectFromParam(EAtlEvtHandwritingType InType, const FAtlHandwritingNiagaraRequestParam& InParam, EHandwritingSpawnRules InSpawnRule, bool bInLoop) {
}

void AHandwritingSpawner::RequestPlayEffectAtSpawnerLocation(EAtlEvtHandwritingType InType, bool bInLoop, const FVector& InLocation, const FRotator& InRotator, int32 InLoopCount, int32 InCameraOffset, const FVector& InScale) {
}

void AHandwritingSpawner::RequestPlayEffectAtSpawnerAttachedToNpc(EAtlEvtHandwritingType InType, ANpcBaseCore* NpcBase, FName AttachSocketName, EHandwritingSpawnRules InSpawnRule, bool bInLoop, const FVector& InLocation, const FRotator& InRotator, int32 InLoopCount, int32 InCameraOffset, const FVector& InScale) {
}

void AHandwritingSpawner::RequestPlayEffectAtSpawnerAttachedTo(EAtlEvtHandwritingType InType, ACharacter* Character, FName AttachSocketName, EHandwritingSpawnRules InSpawnRule, bool bInLoop, const FVector& InLocation, const FRotator& InRotator, int32 InLoopCount, int32 InCameraOffset, const FVector& InScale) {
}

void AHandwritingSpawner::RequestPlayEffect(EAtlEvtHandwritingType InType, EHandwritingSpawnRules InSpawnRule, bool bInLoop) {
}

void AHandwritingSpawner::OnCompleteNiagara(UNiagaraComponent* PSystem) {
}

void AHandwritingSpawner::LoadEffectEnded() {
}

AHandwritingSpawner::AHandwritingSpawner() {
    this->HandwritingEffectObj = NULL;
    this->HandwritingGroupType = EAtlHandwritingGroupType::Default;
    this->bAutoDestroyWhenFinishedHandwriting = false;
    this->DataAsset = NULL;
    this->SpawnRule = EHandwritingSpawnRules::SpawnWorldLocation;
    this->HandwritingType = EAtlEvtHandwritingType::AngerMark;
}

