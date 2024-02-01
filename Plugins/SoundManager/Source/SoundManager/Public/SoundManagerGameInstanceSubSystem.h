#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SoundManagerGameInstanceSubSystem.generated.h"

class UPlayAdxControl;

UCLASS(Blueprintable)
class SOUNDMANAGER_API USoundManagerGameInstanceSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayAdxControl* PlayAdxControl;
    
public:
    USoundManagerGameInstanceSubSystem();
    UFUNCTION(BlueprintCallable)
    UPlayAdxControl* GetPlayAdxControl();
    
};

