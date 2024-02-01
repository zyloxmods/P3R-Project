#pragma once
#include "CoreMinimal.h"
#include "DatEncountDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatEncountDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 flags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 party_item;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 party_item_num;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ID[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 major;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Minor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Sound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 shuffleLevel;
    
    XRD777_API FDatEncountDataRecord();
};

