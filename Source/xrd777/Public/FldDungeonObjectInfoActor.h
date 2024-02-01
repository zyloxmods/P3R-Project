#pragma once
#include "CoreMinimal.h"
#include "EDungeonObjectInfoType.h"
#include "FldDungeonInfoActor.h"
#include "FldDungeonObjectInfoActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonObjectInfoActor : public AFldDungeonInfoActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonObjectInfoType ObjectType;
    
    AFldDungeonObjectInfoActor();
};

