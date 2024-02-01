#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatEncountDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatEncountDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 flags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 party_item;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 party_item_num;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 id0;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 id1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 id2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 id3;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 id4;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 major;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Minor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Sound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 shuffleLevel;
    
    XRD777_API FDatEncountDataTable();
};

