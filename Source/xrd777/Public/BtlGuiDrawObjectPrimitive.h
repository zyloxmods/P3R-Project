#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BtlGuiDrawObjectCore.h"
#include "BtlGuiDrawPrimitive.h"
#include "BtlGuiDrawObjectPrimitive.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlGuiDrawObjectPrimitive : public UBtlGuiDrawObjectCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiDrawPrimitive Data;
    
    UBtlGuiDrawObjectPrimitive();
    UFUNCTION(BlueprintCallable)
    void SetAntiLength(float anti);
    
    UFUNCTION(BlueprintCallable)
    void MakeRhombus(FVector2D Size, FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void MakeCircle(float Radius, FColor Color, FVector2D Scale);
    
};

