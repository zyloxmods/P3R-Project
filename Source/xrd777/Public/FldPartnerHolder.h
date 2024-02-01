#pragma once
#include "CoreMinimal.h"
#include "FldPartnerHolder.generated.h"

class APawn;
class UFldPartnerComp;

USTRUCT(BlueprintType)
struct FFldPartnerHolder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldPartnerComp* PartnerComp;
    
public:
    XRD777_API FFldPartnerHolder();
};

