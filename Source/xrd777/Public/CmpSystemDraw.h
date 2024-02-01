#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CmpSystemDraw.generated.h"

class ACmpMainActor;
class UCmpSystem;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class XRD777_API UCmpSystemDraw : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> SubMenuMateDynamicAry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pMainActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpSystem* pParent;
    
public:
    UCmpSystemDraw();
};

