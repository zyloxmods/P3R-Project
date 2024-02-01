#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "UIMiscEnemySymbolDraw.generated.h"

class AActor;
class USprAsset;

UCLASS(Blueprintable)
class XRD777_API AUIMiscEnemySymbolDraw : public AUIBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pEnemyRef;
    
    AUIMiscEnemySymbolDraw();
};

