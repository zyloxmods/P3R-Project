#pragma once
#include "CoreMinimal.h"
#include "BtlGuiDrawObjectCore.h"
#include "BtlGuiDrawPanel.h"
#include "BtlGuiDrawObjectPanel.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlGuiDrawObjectPanel : public UBtlGuiDrawObjectCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiDrawPanel Data;
    
    UBtlGuiDrawObjectPanel();
};

