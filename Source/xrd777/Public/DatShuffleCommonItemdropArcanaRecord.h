#pragma once
#include "CoreMinimal.h"
#include "DatShuffleCommonItemdropArcanaRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleCommonItemdropArcanaRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RankID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Num;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 prob;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ItemtID;
    
    XRD777_API FDatShuffleCommonItemdropArcanaRecord();
};

