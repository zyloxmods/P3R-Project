#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "Templates/SubclassOf.h"
#include "MoviePlayActorBase.generated.h"

class AMoviePlayActorBase;
class UAssetLoader;
class UManaComponent;

UCLASS(Blueprintable)
class XRD777_API AMoviePlayActorBase : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MovieIDList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool enableAutoFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMoviePlayActorBase* MainActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMoviePlayActorBase> SubClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UManaComponent* ManaComponent;
    
public:
    AMoviePlayActorBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetManaComponent(UManaComponent* InManaComponent);
    
    UFUNCTION(BlueprintCallable)
    void RequestMovie(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Remove();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoviePlay(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MovieEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Close(bool ForceClose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallOpenSourceForBP();
    
};

