#pragma once
#include "CoreMinimal.h"
#include "HeroParameterTable.generated.h"

USTRUCT(BlueprintType)
struct FHeroParameterTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Points;
    
    XRD777_API FHeroParameterTable();
};

