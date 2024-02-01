#pragma once
#include "CoreMinimal.h"
#include "BasePartyPanel.h"
#include "FieldHeadPanel.h"
#include "UIFieldPartyPanel.generated.h"

class UAssetLoader;
class UPartyPanelRecoveryEffect;
class USprAsset;

UCLASS(Blueprintable)
class XRD777_API AUIFieldPartyPanel : public ABasePartyPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFieldHeadPanel> m_aHeadPanelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPartyPanelRecoveryEffect* m_pRecoveryEffect;
    
    AUIFieldPartyPanel();
};

