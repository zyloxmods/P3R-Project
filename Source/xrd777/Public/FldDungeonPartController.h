#pragma once
#include "CoreMinimal.h"
#include "FldDungeonComponentBase.h"
#include "FldDungeonPartController.generated.h"

class AActor;
class AFldDungeonPartActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldDungeonPartController : public UFldDungeonComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonPartActor*> m_PartActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_WallActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_PartActorRef;
    
public:
    UFldDungeonPartController();
    UFUNCTION(BlueprintCallable)
    void InitFixedMap();
    
    UFUNCTION(BlueprintCallable)
    void InitDesignMap();
    
    UFUNCTION(BlueprintCallable)
    void AutoLoadPart();
    
    UFUNCTION(BlueprintCallable)
    void AutoCreatePart();
    
};

