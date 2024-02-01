#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "FldDungeonEventRefActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonEventRefActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefID;
    
    AFldDungeonEventRefActor();
};

