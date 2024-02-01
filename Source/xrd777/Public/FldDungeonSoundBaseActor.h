#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "EDungeonSuondType.h"
#include "FldDungeonSoundBaseActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonSoundBaseActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonSuondType Type;
    
    AFldDungeonSoundBaseActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPPlay();
    
};

