#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "BtlShuffleSyncDelegate.h"
#include "Templates/SubclassOf.h"
#include "BtlEventAlloutShuffleMonitor.generated.h"

class ABtlShuffleMainBase;
class UAssetLoader;
class UBtlCoreComponent;

UCLASS(Blueprintable)
class XRD777_API ABtlEventAlloutShuffleMonitor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlShuffleSync OnSyncStartCharaAnime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlShuffleSync OnSyncShuffleEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBtlCoreComponent* pCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlShuffleMainBase* pShuffle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABtlShuffleMainBase> ShuffleUIBp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
public:
    ABtlEventAlloutShuffleMonitor();
    UFUNCTION(BlueprintCallable)
    void StartShuffleTime(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckReadyToDestroy() const;
    
};

