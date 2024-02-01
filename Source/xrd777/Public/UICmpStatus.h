#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UICmpStatus.generated.h"

class ACmpMainActor;
class APersonaStatus;
class AUIDialogSingle;
class UCmpCharacterStatusDraw;
class UCmpStatus;
class UCmpStatusCharacterListDraw;
class UUIScene;
class UUISceneFSM;

UCLASS(Blueprintable)
class XRD777_API UUICmpStatus : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUISceneFSM* SceneFSM_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UUIScene*> Scenes_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APersonaStatus* PSStatusActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIDialogSingle* SingleDialog_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpStatusCharacterListDraw* CharaListDraw_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpCharacterStatusDraw* CharaStatusDraw_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pMainActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpStatus* pParent;
    
public:
    UUICmpStatus();
};

