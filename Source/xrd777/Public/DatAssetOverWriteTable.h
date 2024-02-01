#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatAssetOverWriteDataTable.h"
#include "DatAssetOverWriteTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatAssetOverWriteTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatAssetOverWriteDataTable> Data;
    
    UDatAssetOverWriteTable();
};

