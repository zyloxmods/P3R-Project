#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EArbeitOrderableTime.h"
#include "HiddenArbeitTableItem.generated.h"

USTRUCT(BlueprintType)
struct FHiddenArbeitTableItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArbeitOrderableTime TimeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnableFlag;
    
    XRD777_API FHiddenArbeitTableItem();
};

