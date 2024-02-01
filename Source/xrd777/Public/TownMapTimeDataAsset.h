#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "TownMapTimeTable.h"
#include "TownMapTimeDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UTownMapTimeDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTownMapTimeTable> Data;
    
    UTownMapTimeDataAsset();
};

