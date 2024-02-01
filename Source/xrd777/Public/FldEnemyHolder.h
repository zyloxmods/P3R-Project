#pragma once
#include "CoreMinimal.h"
#include "FldEnemyHolder.generated.h"

class AActor;
class UFldEnemyComp;

USTRUCT(BlueprintType)
struct FFldEnemyHolder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldEnemyComp* EnemyComp;
    
public:
    XRD777_API FFldEnemyHolder();
};

