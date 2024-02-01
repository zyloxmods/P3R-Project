#pragma once
#include "CoreMinimal.h"
#include "GetUIParameter.h"
#include "PointUpNote.h"
#include "UIBaseActor.h"
#include "UIGetHeroParameterDraw.generated.h"

class UCmpHeroHumanStatusDraw;
class UNiagaraComponent;
class UNiagaraSystem;
class UPlgAsset;
class USprAsset;

UCLASS(Blueprintable)
class XRD777_API AUIGetHeroParameterDraw : public AUIBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pEffSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlgAsset* m_pNotePlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* m_pRankUpEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* m_pRankUpFinishEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* m_pRankUpEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUIParameter m_tagGetUIP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointUpNote m_tagNote[3];
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpHeroHumanStatusDraw* pHumanParamDraw_;
    
public:
    AUIGetHeroParameterDraw();
};

