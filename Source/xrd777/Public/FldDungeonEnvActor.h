#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "EDungeonEnvType.h"
#include "FldDungeonEnvActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonEnvActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonEnvType Type;
    
    AFldDungeonEnvActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPSetDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPResume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPReflect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPPause();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPGetDefault();
    
};

