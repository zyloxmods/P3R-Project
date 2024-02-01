#pragma once
#include "CoreMinimal.h"
#include "APCommandBase.h"
#include "APCmdStartRecord.generated.h"

class UAutoPlayGameInstanceSubsystem;

UCLASS(Blueprintable)
class AUTOPLAY_API UAPCmdStartRecord : public UAPCommandBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAutoPlayGameInstanceSubsystem> APSubsystem_;
    
public:
    UAPCmdStartRecord();
};

