#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatShuffleCoinArcanaRecord.h"
#include "DatShuffleCoinArcanaTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatShuffleCoinArcanaTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatShuffleCoinArcanaRecord> Data;
    
    UDatShuffleCoinArcanaTable();
};

