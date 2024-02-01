#pragma once
#include "CoreMinimal.h"
#include "BtlEncountWipeCore.h"
#include "BtlGuiPinchEncountWipe.generated.h"

UCLASS(Blueprintable)
class XRD777_API ABtlGuiPinchEncountWipe : public ABtlEncountWipeCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isTexDraw;
    
    ABtlGuiPinchEncountWipe();
    UFUNCTION(BlueprintCallable)
    void EndWipe();
    
};

