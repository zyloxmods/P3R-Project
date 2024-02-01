#pragma once
#include "CoreMinimal.h"
#include "EFldEnemyState.h"
#include "FldEnemyComp.h"
#include "FldEnemyUniqueComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldEnemyUniqueComp : public UFldEnemyComp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldEnemyState State;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldEnemyState NextState;
    
public:
    UFldEnemyUniqueComp();
};

