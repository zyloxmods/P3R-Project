#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatRaceTableRecord.h"
#include "DatRaceTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatRaceTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatRaceTableRecord> Data;
    
    UDatRaceTable();
};

