#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FldPartnerHolder.h"
#include "FldPartnerManager.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldPartnerManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldPartnerHolder> Partners;
    
public:
    AFldPartnerManager();
};

