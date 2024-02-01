#pragma once
#include "CoreMinimal.h"
#include "AppMultiDataAsset.h"
#include "HeroParameterTable.h"
#include "HeroParameterDataAsset.generated.h"

UCLASS(Blueprintable)
class UHeroParameterDataAsset : public UAppMultiDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHeroParameterTable> Tables;
    
    UHeroParameterDataAsset();
};

