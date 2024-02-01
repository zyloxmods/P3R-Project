#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "BattleOnEndScirptDelegate.h"
#include "BtlEncountParam.h"
#include "EBtlCommonEventType.h"
#include "EBtlEventAreaType.h"
#include "EBtlEventType.h"
#include "Templates/SubclassOf.h"
#include "BtlEventController.generated.h"

class AAppActor;
class ABtlActor;
class ABtlEventActor;
class UBfAsset;
class UBmdAsset;
class UBtlCoreComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlEventController : public UAppActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCommonLoadCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBfAsset* pBfCommonAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* pBmdCommonAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBfAsset* pBfAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* pBmdAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlEventActor* pEventActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlEncountParam EncountParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBtlCoreComponent* BtlCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAppActor> SequencerObserveClass;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleOnEndScirpt OnEndScirpt;
    
    UBtlEventController();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPerformer(ABtlActor* Actor, EBtlEventAreaType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetAllPerformer();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingEvent();
    
    UFUNCTION(BlueprintCallable)
    bool HasEventScriptForBP(FBtlEncountParam EncParam);
    
    UFUNCTION(BlueprintCallable)
    void EventStart(EBtlEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void CommonEventStart(EBtlCommonEventType EventType);
    
};

