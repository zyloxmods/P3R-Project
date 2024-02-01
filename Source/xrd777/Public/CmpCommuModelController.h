#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "CmpCommuModelController.generated.h"

class AAppPropsCardContainer;
class AAppPropsCore;
class ACmpMainActor;
class UAnimSequence;
class UTexture2D;

UCLASS(Blueprintable)
class XRD777_API ACmpCommuModelController : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pMainActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppPropsCardContainer* pCardContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppPropsCore* pCardBp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> pTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> pMotions;
    
public:
    ACmpCommuModelController();
};

