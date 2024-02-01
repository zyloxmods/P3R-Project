#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatShuffleCommonCoefficientArcanaRecord.h"
#include "DatShuffleCommonCoefficientArcanaTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatShuffleCommonCoefficientArcanaTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatShuffleCommonCoefficientArcanaRecord> Data;
    
    UDatShuffleCommonCoefficientArcanaTable();
};

