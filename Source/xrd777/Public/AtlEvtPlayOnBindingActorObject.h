#pragma once
#include "CoreMinimal.h"
#include "AtlEvtPlayObject.h"
#include "AtlEvtPlayOnBindingActorObject.generated.h"

UCLASS(Blueprintable)
class AAtlEvtPlayOnBindingActorObject : public AAtlEvtPlayObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EvtName;
    
    AAtlEvtPlayOnBindingActorObject();
    UFUNCTION(BlueprintCallable)
    void OnLoadBindingLevelStreaming();
    
};

