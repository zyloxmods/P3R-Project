#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CurveVectorAnimation.h"
#include "GetUIParameter.h"
#include "UIBaseActor.h"
#include "UITownMapActor.generated.h"

class AActor;
class AFldAnimObj;
class UAssetLoader;
class UBmdAsset;
class UDataTable;
class USkinnedMeshComponent;
class USprAsset;
class UUILayoutDataTable;
class UUILocationSelect;

UCLASS(Blueprintable)
class XRD777_API AUITownMapActor : public AUIBaseActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pTownMapDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pTownMapSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pMiniMapIcon00Spr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pMiniMapIcon01Spr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUIParameter m_tagUip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveVectorAnimation m_curveHeadInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveVectorAnimation m_curveBlueDiamondAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveVectorAnimation m_curveWhiteDiamondAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveVectorAnimation m_curveInfoInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveVectorAnimation m_curveIconAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILocationSelect* m_pLocationSelect;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldAnimObj* m_pSymbolRefList[6];
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* m_pSymbolSkinnedRefList[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pFieldCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pMainCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pStartCamera;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pInfoCamera[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pNameLocator[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* m_pTownMapDetailText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MarginRot;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* m_notSelectedLayoutDataTables[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* m_selectedLayoutDataTables[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* m_infoLayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* m_infoLayoutDataTable2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_notSelectedParamLayouts[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_selectedParamLayouts[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_infoParamLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_infoParamLayout2;
    
public:
    AUITownMapActor();
};

