#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BtlVoice.generated.h"

class ABtlActor;
class UBtlCoreComponent;
class UBtlVoicePlayWatcher;

UCLASS(Blueprintable)
class XRD777_API UBtlVoice : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlActor* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBtlCoreComponent* Core;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlVoicePlayWatcher* Watcher;
    
public:
    UBtlVoice();
    UFUNCTION(BlueprintCallable)
    void StartLipyncWatcher();
    
    UFUNCTION(BlueprintCallable)
    void EndLipsyncWatcher();
    
};

