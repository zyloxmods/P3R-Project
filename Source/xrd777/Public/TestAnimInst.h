#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "TestAnimInst.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class XRD777_API UTestAnimInst : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookatPosition2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookatAlpha2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpressionTrig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSeq0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSeq1;
    
    UTestAnimInst();
    UFUNCTION(BlueprintCallable)
    void TestFunction(int32 Type, int32 Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimChange(int32 Type, int32 Param);
    
};

