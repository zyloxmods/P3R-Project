#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatShuffleCommonItemdropArcanaRecord.h"
#include "DatShuffleCommonItemdropArcanaTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatShuffleCommonItemdropArcanaTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatShuffleCommonItemdropArcanaRecord> Data;
    
    UDatShuffleCommonItemdropArcanaTable();
};

