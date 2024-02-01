#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CmpStatusCharacterListDraw.generated.h"

class ACmpMainActor;
class UUICmpStatus;

UCLASS(Blueprintable)
class XRD777_API UCmpStatusCharacterListDraw : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICmpStatus* pParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pMainActor;
    
public:
    UCmpStatusCharacterListDraw();
};

