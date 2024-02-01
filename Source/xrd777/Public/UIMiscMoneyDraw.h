#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "UIMiscMoneyDraw.generated.h"

class USprAsset;

UCLASS(Blueprintable)
class XRD777_API AUIMiscMoneyDraw : public AUIBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pMoneySpr;
    
public:
    AUIMiscMoneyDraw();
};

