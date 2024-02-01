#pragma once
#include "CoreMinimal.h"
#include "UIDialogBase.h"
#include "UIDialogDouble.generated.h"

class ACmpMainActor;

UCLASS(Blueprintable)
class XRD777_API AUIDialogDouble : public AUIDialogBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FirstChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecondChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pCmpMainActor;
    
public:
    AUIDialogDouble();
};

