#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DungeonPartFDoorTypeDataTableRow.h"
#include "DungeonPartMisRoomTypeDataTableRow.h"
#include "DungeonPartVariationDataTableRow.h"
#include "FldDungeonPartVariationDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UFldDungeonPartVariationDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonPartVariationDataTableRow Area1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonPartVariationDataTableRow Area2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonPartVariationDataTableRow Area3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonPartVariationDataTableRow Area4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonPartVariationDataTableRow Area5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonPartVariationDataTableRow Area6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonPartFDoorTypeDataTableRow FDoorTypeTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonPartMisRoomTypeDataTableRow MisRoomTypeTbl;
    
    UFldDungeonPartVariationDataAsset();
};

