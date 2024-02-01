#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "UIPartyPanel.generated.h"

class USprAsset;

UCLASS(Blueprintable)
class XRD777_API AUIPartyPanel : public AUIBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pPartyPanelSpr;
    
    AUIPartyPanel();
};

