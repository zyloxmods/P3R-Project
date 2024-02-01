#pragma once
#include "CoreMinimal.h"
#include "BtlGuiDrawStructCore.h"
#include "BtlGuiDrawRoundRect.generated.h"

USTRUCT(BlueprintType)
struct FBtlGuiDrawRoundRect : public FBtlGuiDrawStructCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Round;
    
    XRD777_API FBtlGuiDrawRoundRect();
};

