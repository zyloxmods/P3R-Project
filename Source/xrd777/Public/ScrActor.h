#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScrActorFinishedDelegateDelegate.h"
#include "ScrActor.generated.h"

class UAssetLoader;
class UBfAsset;
class UBmdAsset;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AScrActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBfAsset* mpBfAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* mpBmdAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* mpAssetLoader;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrActorFinishedDelegate OnScrActorFinishedDelegate;
    
    AScrActor();
    UFUNCTION(BlueprintCallable)
    void ForcedStopScr();
    
};

