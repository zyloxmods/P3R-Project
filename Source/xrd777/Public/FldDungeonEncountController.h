#pragma once
#include "CoreMinimal.h"
#include "FldDungeonComponentBase.h"
#include "FldEnemyHolder.h"
#include "FldDungeonEncountController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldDungeonEncountController : public UFldDungeonComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldEnemyHolder> m_EnemyCompArray;
    
public:
    UFldDungeonEncountController();
};

