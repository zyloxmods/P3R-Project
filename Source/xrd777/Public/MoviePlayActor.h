#pragma once
#include "CoreMinimal.h"
#include "MoviePlayActorBase.h"
#include "MoviePlayActor.generated.h"

class AMoviePlayActor;
class UMovieCuePointManager;

UCLASS(Blueprintable)
class XRD777_API AMoviePlayActor : public AMoviePlayActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMaterialMovie;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieCuePointManager* CuePointManager;
    
public:
    AMoviePlayActor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void VisibleKeyHelp(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    static bool SyncInstance();
    
    UFUNCTION(BlueprintCallable)
    void ReserveDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Pause(bool NewIsPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReserveDestroy();
    
    UFUNCTION(BlueprintCallable)
    bool IsPause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleWipe();
    
    UFUNCTION(BlueprintCallable)
    static AMoviePlayActor* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    bool GetBGMFlg();
    
    UFUNCTION(BlueprintCallable)
    static void CreateInstance();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDestroy();
    
};

