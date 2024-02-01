#pragma once
#include "CoreMinimal.h"
#include "FldDungeonPartActor.h"
#include "FldDungeonFDoorPartActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonFDoorPartActor : public AFldDungeonPartActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FDoorGroupNum;
    
    AFldDungeonFDoorPartActor();
};

