#pragma once
#include "CoreMinimal.h"
#include "AtlEvtAdditionBGSublevel.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FAtlEvtAdditionBGSublevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FieldLevelName;
    
    FAtlEvtAdditionBGSublevel();
};

