#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "TownMapDetailTextTable.h"
#include "TownMapDetailTextDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UTownMapDetailTextDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTownMapDetailTextTable> Data;
    
    UTownMapDetailTextDataAsset();
};

