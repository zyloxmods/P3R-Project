#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "TownMapInfoTable.h"
#include "TownMapInfoDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UTownMapInfoDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTownMapInfoTable> Data;
    
    UTownMapInfoDataAsset();
};

