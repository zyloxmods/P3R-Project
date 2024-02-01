#pragma once
#include "CoreMinimal.h"
#include "PointUpNote.h"
#include "CommunityPointDraw.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct XRD777_API FCommunityPointDraw {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointUpNote tagNote[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* pRankUpEffectComponent;
    
    FCommunityPointDraw();
};

