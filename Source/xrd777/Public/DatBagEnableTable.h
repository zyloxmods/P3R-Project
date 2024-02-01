#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatBagEnableDataTable.h"
#include "DatBagEnableTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatBagEnableTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatBagEnableDataTable> Data;
    
    UDatBagEnableTable();
};

