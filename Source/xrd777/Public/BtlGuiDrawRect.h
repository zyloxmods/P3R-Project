#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BtlGuiDrawStructCore.h"
#include "BtlGuiDrawRect.generated.h"

USTRUCT(BlueprintType)
struct FBtlGuiDrawRect : public FBtlGuiDrawStructCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 rect;
    
    XRD777_API FBtlGuiDrawRect();
};

