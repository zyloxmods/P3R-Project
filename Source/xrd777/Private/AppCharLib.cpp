#include "AppCharLib.h"

void UAppCharLib::SetOpacityNiagaraOnly(const AActor* Target, const float Value) {
}

void UAppCharLib::SetOpacity(const AActor* Target, const float Value) {
}

bool UAppCharLib::IsUniqueNpc(const int32 ID) {
    return false;
}

bool UAppCharLib::IsDungeonChara(AActor* Target) {
    return false;
}

FString UAppCharLib::GetMaterialSlotName(USkeletalMeshComponent* Target, int32 ID) {
    return TEXT("");
}

TArray<UMaterialInterface*> UAppCharLib::GetMaterial(const AActor* Target) {
    return TArray<UMaterialInterface*>();
}

UAppCharLib::UAppCharLib() {
}

