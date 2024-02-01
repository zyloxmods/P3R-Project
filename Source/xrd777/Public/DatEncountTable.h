#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatEncountDataRecord.h"
#include "DatEncountTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatEncountTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatEncountDataRecord> Data;
    
    UDatEncountTable();
};

