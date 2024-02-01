#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HeroParameterNameRow.generated.h"

USTRUCT(BlueprintType)
struct FHeroParameterNameRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Brain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText charm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Courage;
    
    XRD777_API FHeroParameterNameRow();
};

