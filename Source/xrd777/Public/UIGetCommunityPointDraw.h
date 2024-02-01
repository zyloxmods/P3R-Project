#pragma once
#include "CoreMinimal.h"
#include "GetUIParameter.h"
#include "UIBaseActor.h"
#include "UIGetCommunityPointDraw.generated.h"

class UAssetLoader;
class UNiagaraComponent;
class UNiagaraSystem;
class UPlgAsset;
class USprAsset;

UCLASS(Blueprintable)
class XRD777_API AUIGetCommunityPointDraw : public AUIBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlgAsset* m_pNotePlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* m_pRankUpEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* m_pRankUpFinishEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* m_pRankUpEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUIParameter m_tagGetUIP;
    
    AUIGetCommunityPointDraw();
};

