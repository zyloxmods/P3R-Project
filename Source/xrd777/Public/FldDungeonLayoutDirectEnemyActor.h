#pragma once
#include "CoreMinimal.h"
#include "FldDungeonLayoutDirectActor.h"
#include "FldDungeonLayoutDirectEnemyActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonLayoutDirectEnemyActor : public AFldDungeonLayoutDirectActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ModelID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SymbolID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DefeatFlagID;
    
    AFldDungeonLayoutDirectEnemyActor();
};

