#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FldMiniMapData_Target.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FFldMiniMapData_Target {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mTransform;
    
    FFldMiniMapData_Target();
};

