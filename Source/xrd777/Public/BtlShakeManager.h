#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "EBtlShakeType.h"
#include "Templates/SubclassOf.h"
#include "BtlShakeManager.generated.h"

class ABtlShakeManager;
class APlayerController;
class UAssetLoader;
class UMatineeCameraShake;

UCLASS(Blueprintable)
class XRD777_API ABtlShakeManager : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMatineeCameraShake>> PresetShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlShakeManager* childActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABtlShakeManager> ShakeAsset;
    
public:
    ABtlShakeManager();
    UFUNCTION(BlueprintCallable)
    static void BtlShakeStop(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static void BtlShakePlay(EBtlShakeType Type, float PlayTime, APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static ABtlShakeManager* BtlShakeManagerGetInstance();
    
};

