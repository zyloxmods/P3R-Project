#pragma once
#include "CoreMinimal.h"
#include "BtlGuiDrawStructCore.h"
#include "BtlGuiDrawPanel.generated.h"

USTRUCT(BlueprintType)
struct FBtlGuiDrawPanel : public FBtlGuiDrawStructCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    XRD777_API FBtlGuiDrawPanel();
};

