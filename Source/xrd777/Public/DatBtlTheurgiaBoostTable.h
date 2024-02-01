#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatBtlTheurgiaBoostRecord.h"
#include "DatBtlTheurgiaBoostTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatBtlTheurgiaBoostTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatBtlTheurgiaBoostRecord> Data;
    
    UDatBtlTheurgiaBoostTable();
};

