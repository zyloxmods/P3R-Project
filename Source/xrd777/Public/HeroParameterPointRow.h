#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HeroParameterPointRow.generated.h"

USTRUCT(BlueprintType)
struct FHeroParameterPointRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BrainPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharmPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CouragePoint;
    
    XRD777_API FHeroParameterPointRow();
};

