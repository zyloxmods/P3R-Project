#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "UIMailIconDraw.generated.h"

class USprAsset;

UCLASS(Blueprintable)
class XRD777_API AUIMailIconDraw : public AUIBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* Sprite_;
    
public:
    AUIMailIconDraw();
};

