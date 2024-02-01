#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BtlGuiDrawLineFrame.h"
#include "BtlGuiDrawObjectCore.h"
#include "BtlGuiDrawObjectLineFrame.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlGuiDrawObjectLineFrame : public UBtlGuiDrawObjectCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiDrawLineFrame Data;
    
    UBtlGuiDrawObjectLineFrame();
    UFUNCTION(BlueprintCallable)
    void SetAntiLength(float anti);
    
    UFUNCTION(BlueprintCallable)
    void MakeRhombus(FVector2D Size, FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void MakeCircle(float Radius, FColor Color);
    
};

