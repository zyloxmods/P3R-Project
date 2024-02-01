#pragma once
#include "CoreMinimal.h"
#include "UIScene.h"
#include "CmpStatusCharacterList.generated.h"

class UUICmpStatus;

UCLASS(Blueprintable)
class XRD777_API UCmpStatusCharacterList : public UUIScene {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICmpStatus* Owner_;
    
public:
    UCmpStatusCharacterList();
};

