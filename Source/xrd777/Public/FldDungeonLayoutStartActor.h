#pragma once
#include "CoreMinimal.h"
#include "ELayoutStartType.h"
#include "FldDungeonLayoutActor.h"
#include "FldDungeonLayoutStartActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonLayoutStartActor : public AFldDungeonLayoutActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELayoutStartType StartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FreeID;
    
    AFldDungeonLayoutStartActor();
};

