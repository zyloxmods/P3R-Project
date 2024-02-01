#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/EngineTypes.h"
#include "EAppPauseObjectFlag.h"
#include "EAppPauseType.h"
#include "AppPauseableListener.generated.h"

class AActor;
class UObject;

UINTERFACE(MinimalAPI)
class UAppPauseableListener : public UInterface {
    GENERATED_BODY()
};

class IAppPauseableListener : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void UnPaused(EAppPauseType Type) PURE_VIRTUAL(UnPaused,);
    
    UFUNCTION()
    virtual void Paused(EAppPauseType Type) PURE_VIRTUAL(Paused,);
    
    UFUNCTION()
    virtual EAppPauseObjectFlag GetAppPauseFlags() const PURE_VIRTUAL(GetAppPauseFlags, return EAppPauseObjectFlag::Unknown;);
    
    UFUNCTION()
    virtual UObject* AsUObject() PURE_VIRTUAL(AsUObject, return NULL;);
    
    UFUNCTION()
    virtual AActor* AsAActor() PURE_VIRTUAL(AsAActor, return NULL;);
    
    UFUNCTION()
    virtual void AppPauseableEndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) PURE_VIRTUAL(AppPauseableEndPlay,);
    
    UFUNCTION()
    virtual void AppPauseableBeginPlay() PURE_VIRTUAL(AppPauseableBeginPlay,);
    
};

