#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AppPauseableListener.h"
#include "EAppPauseObjectFlag.h"
#include "EAppPauseType.h"
#include "AppActorComponent.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UAppActorComponent : public UActorComponent, public IAppPauseableListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppPauseObjectFlag AppPauseFlags;
    
    UAppActorComponent();
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

