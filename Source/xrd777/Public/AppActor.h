#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "AppActor_CustomEventDelegate.h"
#include "AppPauseableListener.h"
#include "EAppPauseObjectFlag.h"
#include "EAppPauseType.h"
#include "AppActor.generated.h"

class UObject;

UCLASS(Blueprintable)
class XRD777_API AAppActor : public AActor, public IAppPauseableListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppPauseObjectFlag AppPauseFlags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppActor_CustomEvent PauseFrontEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppActor_CustomEvent PauseBackEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppActor_CustomEvent UnPauseFrontEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppActor_CustomEvent UnPauseBackEvent;
    
    AAppActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAppPauseObjectFlag GetAppPauseFlags() const;
    
    UFUNCTION(BlueprintCallable)
    void EndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
    UFUNCTION(BlueprintCallable)
    UObject* AsUObject();
    
    UFUNCTION(BlueprintCallable)
    AActor* AsAActor();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void UnPaused(EAppPauseType Type) override PURE_VIRTUAL(UnPaused,);
    
    UFUNCTION()
    void Paused(EAppPauseType Type) override PURE_VIRTUAL(Paused,);
    
    UFUNCTION()
    void AppPauseableEndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) override PURE_VIRTUAL(AppPauseableEndPlay,);
    
    UFUNCTION()
    void AppPauseableBeginPlay() override PURE_VIRTUAL(AppPauseableBeginPlay,);
    
};

