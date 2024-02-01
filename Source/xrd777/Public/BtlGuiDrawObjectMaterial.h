#pragma once
#include "CoreMinimal.h"
#include "BtlGuiDrawMaterial.h"
#include "BtlGuiDrawObjectCore.h"
#include "BtlGuiDrawObjectMaterial.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlGuiDrawObjectMaterial : public UBtlGuiDrawObjectCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiDrawMaterial Data;
    
    UBtlGuiDrawObjectMaterial();
};

