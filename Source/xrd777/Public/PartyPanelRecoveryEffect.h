#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CurveLinearColorAnimation.h"
#include "PartyPanelRecoveryEffect.generated.h"

class USprAsset;

UCLASS(Blueprintable)
class XRD777_API UPartyPanelRecoveryEffect : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveLinearColorAnimation m_curveRecoveryEffect;
    
public:
    UPartyPanelRecoveryEffect();
};

