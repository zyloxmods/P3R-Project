#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "UIMiscSupportPartyPanel.generated.h"

class UDataTable;
class USprAsset;

UCLASS(Blueprintable)
class XRD777_API AUIMiscSupportPartyPanel : public AUIBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pSupportPartyPanelDT;
    
    AUIMiscSupportPartyPanel();
};

