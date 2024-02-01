#pragma once
#include "CoreMinimal.h"
#include "BtlGuiDrawObjectCore.h"
#include "BtlGuiDrawRoundRect.h"
#include "BtlGuiDrawObjectRoundRect.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlGuiDrawObjectRoundRect : public UBtlGuiDrawObjectCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiDrawRoundRect Data;
    
    UBtlGuiDrawObjectRoundRect();
};

