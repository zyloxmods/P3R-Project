#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ACBLoadObject.generated.h"

class UAsyncCueSheetManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SOUNDMANAGER_API UACBLoadObject : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAsyncCueSheetManager* Loader;
    
public:
    UACBLoadObject();
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadCompleted();
    
};

