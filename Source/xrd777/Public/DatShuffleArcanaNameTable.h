#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatShuffleArcanaNameRecord.h"
#include "DatShuffleArcanaNameTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatShuffleArcanaNameTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatShuffleArcanaNameRecord> Data;
    
    UDatShuffleArcanaNameTable();
};

