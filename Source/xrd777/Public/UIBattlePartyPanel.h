#pragma once
#include "CoreMinimal.h"
#include "BasePartyPanel.h"
#include "BattleHeadPanel.h"
#include "CurveFloatAnimation.h"
#include "CurveVectorAnimation.h"
#include "GetUIParameter.h"
#include "UIBattlePartyPanel.generated.h"

class UAssetLoader;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPartyPanelRecoveryEffect;
class USprAsset;

UCLASS(Blueprintable)
class XRD777_API AUIBattlePartyPanel : public ABasePartyPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleHeadPanel> m_aHeadPanelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUIParameter m_uip;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveVectorAnimation m_curveDamageShake[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveFloatAnimation m_curveIceYScale[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveFloatAnimation m_curveIceAlpha[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveFloatAnimation m_curveThunderWave[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveFloatAnimation m_curveThunderWaveBone[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveFloatAnimation m_curveThunderWaveCharaLight[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveVectorAnimation m_curveThunderWaveIcons[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveVectorAnimation m_curveOrgiaEffect[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_pSmokeMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_pSmokeMatInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_pSmokeMatGrey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_pSmokeMatInstGrey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPartyPanelRecoveryEffect* m_pRecoveryEffect;
    
    AUIBattlePartyPanel();
};

