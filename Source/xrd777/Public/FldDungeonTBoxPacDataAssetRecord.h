#pragma once
#include "CoreMinimal.h"
#include "FldDungeonTBoxPacDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FFldDungeonTBoxPacDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 pacID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 tboxID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Probability;
    
    XRD777_API FFldDungeonTBoxPacDataAssetRecord();
};

