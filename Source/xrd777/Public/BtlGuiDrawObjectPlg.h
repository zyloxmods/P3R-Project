#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BtlGuiDrawObjectCore.h"
#include "BtlGuiDrawPlg.h"
#include "BtlGuiDrawObjectPlg.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlGuiDrawObjectPlg : public UBtlGuiDrawObjectCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiDrawPlg Data;
    
    UBtlGuiDrawObjectPlg();
    UFUNCTION(BlueprintCallable)
    FVector2D GetSize();
    
};

