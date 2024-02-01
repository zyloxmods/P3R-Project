#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatShuffleLoversArcanaRecord.h"
#include "DatShuffleLoversArcanaTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatShuffleLoversArcanaTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatShuffleLoversArcanaRecord> Data;
    
    UDatShuffleLoversArcanaTable();
};

