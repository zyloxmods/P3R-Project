#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Templates/SubclassOf.h"
#include "TestNishidaGameMode.generated.h"

class ATestNishidaResourceActor;
class UTestNishidaResource;

UCLASS(Blueprintable, NonTransient)
class XRD777_API ATestNishidaGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTestNishidaResource> m_pTestNishidaResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATestNishidaResourceActor> m_pTestNishidaResourceActor;
    
    ATestNishidaGameMode();
};

