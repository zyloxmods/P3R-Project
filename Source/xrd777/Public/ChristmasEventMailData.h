#pragma once
#include "CoreMinimal.h"
#include "ChristmasEventMailData.generated.h"

USTRUCT(BlueprintType)
struct FChristmasEventMailData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Rank;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 flag;
    
    XRD777_API FChristmasEventMailData();
};

