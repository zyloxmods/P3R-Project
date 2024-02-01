#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatPersonaCombineAdjustDataTable.h"
#include "DatPersonaCombineAdjustTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatPersonaCombineAdjustTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatPersonaCombineAdjustDataTable> Data;
    
    UDatPersonaCombineAdjustTable();
};

