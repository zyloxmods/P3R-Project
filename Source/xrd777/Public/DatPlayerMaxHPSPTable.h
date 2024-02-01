#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatPlayerMaxHPSPBunch.h"
#include "DatPlayerMaxHPSPTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatPlayerMaxHPSPTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatPlayerMaxHPSPBunch> Data;
    
    UDatPlayerMaxHPSPTable();
};

