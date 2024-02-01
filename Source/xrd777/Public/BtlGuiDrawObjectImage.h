#pragma once
#include "CoreMinimal.h"
#include "BtlGuiDrawImage.h"
#include "BtlGuiDrawObjectCore.h"
#include "BtlGuiDrawObjectImage.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlGuiDrawObjectImage : public UBtlGuiDrawObjectCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiDrawImage Data;
    
    UBtlGuiDrawObjectImage();
    UFUNCTION(BlueprintCallable)
    void GetWidthHeight(float& Width, float& Height);
    
};

