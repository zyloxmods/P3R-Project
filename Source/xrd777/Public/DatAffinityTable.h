#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatAffinityDataRecord.h"
#include "DatAffinityTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatAffinityTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatAffinityDataRecord> Data;
    
    UDatAffinityTable();
};

