#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatSupportInfoTableRecord.h"
#include "DatSupportInfoTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatSupportInfoTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatSupportInfoTableRecord> Data;
    
    UDatSupportInfoTable();
};

