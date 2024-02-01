#pragma once
#include "CoreMinimal.h"
#include "BasePartyPanel.h"
#include "CampHeadPanel.h"
#include "CurveVectorAnimation.h"
#include "UICampPartyPanel.generated.h"

class UAssetLoader;
class USprAsset;

UCLASS(Blueprintable)
class XRD777_API AUICampPartyPanel : public ABasePartyPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCampHeadPanel> m_aHeadPanelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveVectorAnimation m_curveInAnim;
    
    AUICampPartyPanel();
};

