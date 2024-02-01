#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAccessInfoCarNoDisplayType.h"
#include "EAccessInfoPlaceNameWidthType.h"
#include "UIAccessInfoLayoutParam.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FUIAccessInfoLayoutParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccessInfoCarNoDisplayType CarNoDisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccessInfoPlaceNameWidthType PlaceNameWidthType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedCharacterWidth;
    
    FUIAccessInfoLayoutParam();
};

