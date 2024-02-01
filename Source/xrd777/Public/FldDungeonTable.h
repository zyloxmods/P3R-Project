#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FldDungeonEncountPacDataAssetRecord.h"
#include "FldDungeonFloorDataAssetRecord.h"
#include "FldDungeonLayoutCombDataAssetRecord.h"
#include "FldDungeonPartsSelDataAssetRecord.h"
#include "FldDungeonTBoxItemDataAssetRecord.h"
#include "FldDungeonTBoxPacDataAssetRecord.h"
#include "FldDungeonTBoxTypeDataAssetRecord.h"
#include "FldDungeonTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UFldDungeonTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldDungeonPartsSelDataAssetRecord> PartsSelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldDungeonLayoutCombDataAssetRecord> LayoutCombData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldDungeonFloorDataAssetRecord> FloorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldDungeonTBoxTypeDataAssetRecord> TBoxTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldDungeonTBoxItemDataAssetRecord> TBoxItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldDungeonTBoxPacDataAssetRecord> TBoxPacData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldDungeonEncountPacDataAssetRecord> EncountPacData;
    
    UFldDungeonTable();
    UFUNCTION(BlueprintCallable)
    void Import();
    
};

