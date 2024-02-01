#pragma once
#include "CoreMinimal.h"
#include "EvitemItemList.generated.h"

USTRUCT(BlueprintType)
struct FEvitemItemList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemDef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SortNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ItemType;
    
    XRD777_API FEvitemItemList();
};

