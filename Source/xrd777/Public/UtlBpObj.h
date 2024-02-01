#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "UtlBpObjCore.h"
#include "UtlBpObj.generated.h"

class UBfAsset;

UCLASS(Blueprintable)
class XRD777_API UUtlBpObj : public UUtlBpObjCore {
    GENERATED_BODY()
public:
    UUtlBpObj();
protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void SyncFade(int32 Type, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void StartScript(TSoftObjectPtr<UBfAsset> InAsset, int32 ProcNo, FLatentActionInfo LatentInfo, int32& Result);
    
    UFUNCTION(BlueprintCallable)
    void StartFadeOUT(int32 Type, int32 Frame);
    
    UFUNCTION(BlueprintCallable)
    void StartFadeIN(int32 Type, int32 Frame);
    
};

