#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "UIDateDraw.generated.h"

class UAgePanel;
class UDataTable;
class USprAsset;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API AUIDateDraw : public AUIBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAgePanel* m_pAgePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pFieldSpr;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* LayoutDataTable;
    
public:
    AUIDateDraw();
};

