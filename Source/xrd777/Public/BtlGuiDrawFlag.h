#pragma once
#include "CoreMinimal.h"
#include "BtlGuiDrawFlag.generated.h"

USTRUCT(BlueprintType)
struct FBtlGuiDrawFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InheritScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InheritAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InheritColor;
    
    XRD777_API FBtlGuiDrawFlag();
};

