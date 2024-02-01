#pragma once
#include "CoreMinimal.h"
#include "BtlEncountWipeCore.h"
#include "BtlGuiEventEncountWipe.generated.h"

UCLASS(Blueprintable)
class XRD777_API ABtlGuiEventEncountWipe : public ABtlEncountWipeCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isTexDraw;
    
    ABtlGuiEventEncountWipe();
    UFUNCTION(BlueprintCallable)
    void EndWipe();
    
};

