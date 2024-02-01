#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "BtlGuiPromiseComponent.generated.h"

class UBtlCoreComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlGuiPromiseComponent : public UAppActorComponent {
    GENERATED_BODY()
public:
    UBtlGuiPromiseComponent();
    UFUNCTION(BlueprintCallable)
    void StopSupportInfo(UBtlCoreComponent* BtlCore);
    
    UFUNCTION(BlueprintCallable)
    void StartSupportInfo(UBtlCoreComponent* BtlCore, bool isGeneral, int32 msgNo);
    
    UFUNCTION(BlueprintCallable)
    bool CheckMsgStart();
    
};

