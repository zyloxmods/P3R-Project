#pragma once
#include "CoreMinimal.h"
#include "DebugViewer.h"
#include "HumanParameterUpViewer.generated.h"

class UCmpHeroHumanStatus;
class UCmpHeroHumanStatusDraw;
class UUIScene;

UCLASS(Blueprintable)
class XRD777_API AHumanParameterUpViewer : public ADebugViewer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpHeroHumanStatus* pHeroParamSystem_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpHeroHumanStatusDraw* pHumanParamDraw_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIScene* pScene;
    
public:
    AHumanParameterUpViewer();
};

