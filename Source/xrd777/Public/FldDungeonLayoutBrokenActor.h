#pragma once
#include "CoreMinimal.h"
#include "FldDungeonLayoutActor.h"
#include "FldDungeonLayoutBrokenActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonLayoutBrokenActor : public AFldDungeonLayoutActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Empty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Probability;
    
    AFldDungeonLayoutBrokenActor();
};

