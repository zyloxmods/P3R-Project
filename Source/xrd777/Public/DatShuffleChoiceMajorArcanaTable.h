#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatShuffleChoiceMajorArcanaRecord.h"
#include "DatShuffleChoiceMajorArcanaTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatShuffleChoiceMajorArcanaTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatShuffleChoiceMajorArcanaRecord> Data;
    
    UDatShuffleChoiceMajorArcanaTable();
};

