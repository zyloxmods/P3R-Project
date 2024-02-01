#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "EDungeonInfoType.h"
#include "FldDungeonInfoActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonInfoActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonInfoType Type;
    
    AFldDungeonInfoActor();
};

