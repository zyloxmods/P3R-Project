#pragma once
#include "CoreMinimal.h"
#include "FldPlayerComp.h"
#include "ldPlayerInputInterpolation.h"
#include "FldPlayerAbsComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldPlayerAbsComp : public UFldPlayerComp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FldPlayerInputInterpolation InputInterpolation;
    
public:
    UFldPlayerAbsComp();
};

