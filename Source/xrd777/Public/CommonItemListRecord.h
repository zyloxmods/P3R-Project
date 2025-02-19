#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CommonItemListRecord.generated.h"

USTRUCT(BlueprintType)
struct FCommonItemListRecord : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SortNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 BtlSortNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ItemType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 UsePlaceID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Rarity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Tier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Hp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Sp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Strength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Magic;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Endurance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Agility;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Luck;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 skillId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Price;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SellPrice;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 GetFLG;
    
    XRD777_API FCommonItemListRecord();
};

