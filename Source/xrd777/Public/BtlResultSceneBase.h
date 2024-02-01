#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "BtlResultSceneBase.generated.h"

UCLASS(Blueprintable)
class XRD777_API ABtlResultSceneBase : public AAppActor {
    GENERATED_BODY()
public:
    ABtlResultSceneBase();
    UFUNCTION(BlueprintCallable)
    void StartEntryScene();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseResource();
    
    UFUNCTION(BlueprintCallable)
    void LoadResource();
    
    UFUNCTION(BlueprintCallable)
    bool CheckEndEntryScene();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCompleteLoadResource();
    
};

