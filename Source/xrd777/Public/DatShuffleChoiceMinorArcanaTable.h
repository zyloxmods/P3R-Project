#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatShuffleChoiceMinorArcanaRecord.h"
#include "DatShuffleChoiceMinorArcanaTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatShuffleChoiceMinorArcanaTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatShuffleChoiceMinorArcanaRecord> Data;
    
    UDatShuffleChoiceMinorArcanaTable();
};

