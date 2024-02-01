#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatAssetOverWriteEventDataTable.h"
#include "DatAssetOverWriteEventTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatAssetOverWriteEventTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatAssetOverWriteEventDataTable> Data;
    
    UDatAssetOverWriteEventTable();
};

