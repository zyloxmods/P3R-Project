#pragma once
#include "CoreMinimal.h"
#include "ChristmasEventListData.h"
#include "ChristmasEventMailData.h"
#include "ChristmasEventData.generated.h"

USTRUCT(BlueprintType)
struct FChristmasEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChristmasEventMailData Mail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChristmasEventListData> Events;
    
    XRD777_API FChristmasEventData();
};

