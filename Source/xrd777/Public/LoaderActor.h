#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "LoaderActor.generated.h"

class UAtomCueSheetLoaderComponent;

UCLASS(Blueprintable)
class XRD777_API ALoaderActor : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomCueSheetLoaderComponent* Loader;
    
public:
    ALoaderActor();
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadCompleted();
    
};

