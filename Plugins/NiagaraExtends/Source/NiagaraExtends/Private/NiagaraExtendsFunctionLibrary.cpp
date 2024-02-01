#include "NiagaraExtendsFunctionLibrary.h"

UNiagaraComponent* UNiagaraExtendsFunctionLibrary::SpawnSystemAttachedOnCamera(const FString& WorldAssetPath) {
    return NULL;
}

UNiagaraComponent* UNiagaraExtendsFunctionLibrary::SpawnSystemAttached(UNiagaraSystem* SystemTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, bool bAbsoluteLocation, bool bAbsoluteRotation, bool bAbsoluteScale, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck) {
    return NULL;
}

AActor* UNiagaraExtendsFunctionLibrary::SpawnActorFromBP(APlayerController* InPC, const FString& InBaseAssetPath, const FTransform InBaseTransform) {
    return NULL;
}

void UNiagaraExtendsFunctionLibrary::SetAllNiagaraPaused(const UObject* InWorldContextObject, bool InPaused) {
}

void UNiagaraExtendsFunctionLibrary::OpenAssetEditorWindowFromPath(const FString& FilePath) {
}

void UNiagaraExtendsFunctionLibrary::OpenAssetEditorWindowFromAsset(UObject* Asset) {
}

TArray<FString> UNiagaraExtendsFunctionLibrary::GetWarldLevelNames(const FString& WorldAssetPath) {
    return TArray<FString>();
}

FVector UNiagaraExtendsFunctionLibrary::GetNiagaraEmitterVectorValue(const UNiagaraComponent* NiagaraComponent, const FString& InEmitterName, const FString& InValueName) {
    return FVector{};
}

FQuat UNiagaraExtendsFunctionLibrary::GetNiagaraEmitterQuatValue(const UNiagaraComponent* NiagaraComponent, const FString& InEmitterName, const FString& InValueName) {
    return FQuat{};
}

FMatrix UNiagaraExtendsFunctionLibrary::GetNiagaraEmitterMatrixValue(const UNiagaraComponent* NiagaraComponent, const FString& InEmitterName, const FString& InValueName) {
    return FMatrix{};
}

int32 UNiagaraExtendsFunctionLibrary::GetNiagaraEmitterIntValue(const UNiagaraComponent* NiagaraComponent, const FString& InEmitterName, const FString& InValueName) {
    return 0;
}

float UNiagaraExtendsFunctionLibrary::GetNiagaraEmitterFloatValue(const UNiagaraComponent* NiagaraComponent, const FString& InEmitterName, const FString& InValueName) {
    return 0.0f;
}

bool UNiagaraExtendsFunctionLibrary::GetNiagaraEmitterBoolValue(const UNiagaraComponent* NiagaraComponent, const FString& InEmitterName, const FString& InValueName) {
    return false;
}

FPostProcessSettings UNiagaraExtendsFunctionLibrary::GetFinalPostProcessSettings(UWorld* World) {
    return FPostProcessSettings{};
}

TArray<FString> UNiagaraExtendsFunctionLibrary::GetEmitterNames(UNiagaraComponent* NiagaraComponent) {
    return TArray<FString>();
}

UNiagaraExtendsFunctionLibrary::UNiagaraExtendsFunctionLibrary() {
}

