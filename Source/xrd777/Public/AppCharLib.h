#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AppCharLib.generated.h"

class AActor;
class UMaterialInterface;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class XRD777_API UAppCharLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppCharLib();
    UFUNCTION(BlueprintCallable)
    static void SetOpacityNiagaraOnly(const AActor* Target, const float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetOpacity(const AActor* Target, const float Value);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUniqueNpc(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDungeonChara(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static FString GetMaterialSlotName(USkeletalMeshComponent* Target, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMaterialInterface*> GetMaterial(const AActor* Target);
    
};

