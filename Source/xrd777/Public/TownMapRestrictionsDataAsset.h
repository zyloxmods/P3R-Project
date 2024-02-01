#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "TownMapRestrictionsTable.h"
#include "TownMapRestrictionsDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UTownMapRestrictionsDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTownMapRestrictionsTable> Data;
    
    UTownMapRestrictionsDataAsset();
};

