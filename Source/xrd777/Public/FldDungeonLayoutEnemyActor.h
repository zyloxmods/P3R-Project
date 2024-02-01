#pragma once
#include "CoreMinimal.h"
#include "EDungeonEnemyType.h"
#include "FldDungeonLayoutActor.h"
#include "FldDungeonLayoutEnemyActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonLayoutEnemyActor : public AFldDungeonLayoutActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonEnemyType EnemyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EncountID;
    
    AFldDungeonLayoutEnemyActor();
};

