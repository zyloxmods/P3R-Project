#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatPersonaGrowthDataRecord.h"
#include "DatPersonaGrowthTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatPersonaGrowthTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatPersonaGrowthDataRecord> Data;
    
    UDatPersonaGrowthTable();
};

