#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIBaseActor.h"
#include "UIHeroParameterStatus.generated.h"

class AUIHeroParameterStatusDraw;
class UAssetLoader;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AUIHeroParameterStatus : public AUIBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIHeroParameterStatusDraw* m_pHeroParamDrawActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUIHeroParameterStatusDraw> m_pHeroParamDrawActorSC;
    
    AUIHeroParameterStatus();
};

