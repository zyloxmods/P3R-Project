#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "FldDungeonBase.generated.h"

class AFldDungeonAutoGenerateActor;
class AFldDungeonParamActor;
class AFldDungeonSoundActor;
class AFldEnemyManager;
class AFldPartnerManager;
class UFldDungeonComponentBase;
class USceneComponent;

UCLASS(Blueprintable)
class XRD777_API AFldDungeonBase : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldDungeonSoundActor* m_pEnvSEActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldDungeonAutoGenerateActor* m_pFloorAutoGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldEnemyManager* m_pEnemyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldPartnerManager* m_pPartnerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFldDungeonComponentBase*> m_ControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldDungeonParamActor* m_pDungeonParam;
    
public:
    AFldDungeonBase();
};

