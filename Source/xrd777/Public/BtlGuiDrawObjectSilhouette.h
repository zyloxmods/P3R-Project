#pragma once
#include "CoreMinimal.h"
#include "BtlGuiDrawObjectCore.h"
#include "BtlGuiDrawSilhouette.h"
#include "BtlGuiDrawObjectSilhouette.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlGuiDrawObjectSilhouette : public UBtlGuiDrawObjectCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiDrawSilhouette Data;
    
    UBtlGuiDrawObjectSilhouette();
};

