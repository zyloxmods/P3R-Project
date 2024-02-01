#pragma once
#include "CoreMinimal.h"
#include "AppMultiDataAsset.h"
#include "GenSelItemLineup.h"
#include "GenSelItemLineupDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UGenSelItemLineupDataAsset : public UAppMultiDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenSelItemLineup> Data;
    
    UGenSelItemLineupDataAsset();
};

