#pragma once
#include "CoreMinimal.h"
#include "SpecialSpreadItem.generated.h"

USTRUCT(BlueprintType)
struct FSpecialSpreadItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ResultID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SourceID[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Index;
    
    XRD777_API FSpecialSpreadItem();
};

