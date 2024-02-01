#pragma once
#include "CoreMinimal.h"
#include "BtlGuiDrawStructCore.h"
#include "BtlGuiDrawPlg.generated.h"

class UPlgAsset;

USTRUCT(BlueprintType)
struct FBtlGuiDrawPlg : public FBtlGuiDrawStructCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlgAsset* plg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 plgNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool reverseAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool inverseX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isMultiMode;
    
    XRD777_API FBtlGuiDrawPlg();
};

