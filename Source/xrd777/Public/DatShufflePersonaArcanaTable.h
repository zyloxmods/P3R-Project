#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatShufflePersonaArcanaRecord.h"
#include "DatShufflePersonaArcanaTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatShufflePersonaArcanaTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatShufflePersonaArcanaRecord> Data;
    
    UDatShufflePersonaArcanaTable();
};

