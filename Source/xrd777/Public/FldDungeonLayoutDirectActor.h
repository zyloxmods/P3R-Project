#pragma once
#include "CoreMinimal.h"
#include "FldDungeonLayoutActor.h"
#include "FldDungeonLayoutDirectActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonLayoutDirectActor : public AFldDungeonLayoutActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LayoutId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Eigenvalue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GateKeeper;
    
    AFldDungeonLayoutDirectActor();
};

