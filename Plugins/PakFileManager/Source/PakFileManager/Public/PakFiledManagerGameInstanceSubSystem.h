#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PakFiledManagerGameInstanceSubSystem.generated.h"

class UPakFileManagerControl;

UCLASS(Blueprintable)
class PAKFILEMANAGER_API UPakFiledManagerGameInstanceSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPakFileManagerControl* FileManagerControl;
    
public:
    UPakFiledManagerGameInstanceSubSystem();
    UFUNCTION(BlueprintCallable)
    UPakFileManagerControl* GetFileManagerControl();
    
};

