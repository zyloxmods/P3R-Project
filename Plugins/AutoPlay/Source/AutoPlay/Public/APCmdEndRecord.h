#pragma once
#include "CoreMinimal.h"
#include "APCommandBase.h"
#include "APCmdEndRecord.generated.h"

class UAutoPlayGameInstanceSubsystem;

UCLASS(Blueprintable)
class AUTOPLAY_API UAPCmdEndRecord : public UAPCommandBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAutoPlayGameInstanceSubsystem> APSubsystem_;
    
public:
    UAPCmdEndRecord();
};

