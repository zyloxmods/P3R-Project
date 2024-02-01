#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CmpSystemSystem.generated.h"

class ACmpMainActor;
class AUIRestore;
class AUISaveLoad;

UCLASS(Blueprintable)
class XRD777_API UCmpSystemSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pCmpMainActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUISaveLoad* pSaveMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIRestore* pRestoreMenu;
    
public:
    UCmpSystemSystem();
};

