#pragma once
#include "CoreMinimal.h"
#include "AppMultiDataAsset.h"
#include "DatAllyPersonaGrowthDataRecord.h"
#include "DatAllyPersonaGrowthTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatAllyPersonaGrowthTable : public UAppMultiDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatAllyPersonaGrowthDataRecord> Data;
    
    UDatAllyPersonaGrowthTable();
};

