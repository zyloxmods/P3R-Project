#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UtlProcManager.generated.h"

class AUtlProcActor;

UCLASS(Blueprintable)
class XRD777_API UUtlProcManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUtlProcActor* mNowActor_;
    
public:
    UUtlProcManager();
};

