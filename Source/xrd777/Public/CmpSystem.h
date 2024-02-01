#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "CmpMenuBase.h"
#include "Templates/SubclassOf.h"
#include "CmpSystem.generated.h"

class AActor;
class AUIConfiguration;
class AUIDictionary;
class AUISaveLoad;
class AUITutorial;
class AUITutorialDraw;
class UCmpSystemDraw;
class UCmpSystemSystem;

UCLASS(Blueprintable)
class XRD777_API UCmpSystem : public UCmpMenuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpSystemDraw* pSystemDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpSystemSystem* pSystemSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUISaveLoad* pSaveMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUITutorial* pTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIDictionary* pDictionary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUITutorialDraw> pTutorialDrawClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIConfiguration* pConfig;
    
public:
    UCmpSystem();
private:
    UFUNCTION(BlueprintCallable)
    void OnEndPlaySubProcess(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

