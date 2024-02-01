#pragma once
#include "CoreMinimal.h"
#include "ChristmasEventListData.generated.h"

USTRUCT(BlueprintType)
struct FChristmasEventListData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 major;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Minor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 flag;
    
    XRD777_API FChristmasEventListData();
};

