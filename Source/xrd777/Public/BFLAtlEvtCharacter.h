#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAppCharCategoryType.h"
#include "BFLAtlEvtCharacter.generated.h"

class AActor;
class ACharacter;
class ACharacterBaseCore;
class ANpcBaseCore;

UCLASS(Blueprintable)
class XRD777_API UBFLAtlEvtCharacter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBFLAtlEvtCharacter();
    UFUNCTION(BlueprintCallable)
    static void TickLookAtEditorOnly(ACharacter* Character, bool bShowDebugLookAtTargetLocation, FVector LookAtFinalLocation);
    
    UFUNCTION(BlueprintCallable)
    static void PersonaCombineAdjust(AActor* PersonaActor);
    
    UFUNCTION(BlueprintCallable)
    static void KoromaruAdjust(AActor* KoromaruActor);
    
    UFUNCTION(BlueprintCallable)
    static void ConstructNPCCostume(ANpcBaseCore* NpcBaseCore, int32 AppNpcCharaCostumeIndex, int32 NpcIndexId, int32 HairId, int32 FaceID);
    
    UFUNCTION(BlueprintCallable)
    static void ConstructCostume(ACharacterBaseCore* CharacterBaseCore, EAppCharCategoryType AppCharaCategory, int32 AppCharaIndex, int32 AppCharaCostumeIndex);
    
};

