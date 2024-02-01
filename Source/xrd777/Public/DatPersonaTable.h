#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatPersonaDataRecord.h"
#include "DatPersonaTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatPersonaTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatPersonaDataRecord> Data;
    
    UDatPersonaTable();
};

