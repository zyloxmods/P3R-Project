#pragma once
#include "CoreMinimal.h"
#include "FldDungeonTBoxItemDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FFldDungeonTBoxItemDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ItemId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 itemNum;
    
    XRD777_API FFldDungeonTBoxItemDataAssetRecord();
};

