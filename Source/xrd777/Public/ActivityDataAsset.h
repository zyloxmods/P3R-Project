#pragma once
#include "CoreMinimal.h"
#include "ActivityData.h"
#include "AppDataAsset.h"
#include "ActivityDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UActivityDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActivityData> Data;
    
    UActivityDataAsset();
};

