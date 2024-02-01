#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "AddContentDialog.generated.h"

class ADLCManager;
class AUIProgressBarDraw;

UCLASS(Blueprintable)
class XRD777_API AAddContentDialog : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADLCManager* mDlcManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIProgressBarDraw* mProgressBar;
    
public:
    AAddContentDialog();
};

