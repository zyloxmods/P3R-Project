#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "TownMapInfoNameTable.h"
#include "TownMapInfoNameDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UTownMapInfoNameDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTownMapInfoNameTable> Data;
    
    UTownMapInfoNameDataAsset();
};

