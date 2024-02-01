#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AppPropsCardParam.h"
#include "AppPropsCardInterface.generated.h"

class UMaterialInstanceDynamic;

UINTERFACE(Blueprintable)
class XRD777_API UAppPropsCardInterface : public UInterface {
    GENERATED_BODY()
};

class XRD777_API IAppPropsCardInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TarotCardSync();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TarotCardSetup(FAppPropsCardParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterialInstanceDynamic* GetFrontMaterial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterialInstanceDynamic* GetBackMaterial();
    
};

