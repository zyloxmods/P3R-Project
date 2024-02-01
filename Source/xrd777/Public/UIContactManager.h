#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UIContactManager.generated.h"

class AAppActor;

UCLASS(Blueprintable)
class XRD777_API UUIContactManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAppActor*> m_pUIActorList;
    
public:
    UUIContactManager();
};

