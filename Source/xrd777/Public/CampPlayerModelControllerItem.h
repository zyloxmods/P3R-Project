#pragma once
#include "CoreMinimal.h"
#include "CampModelControllerItem.h"
#include "Templates/SubclassOf.h"
#include "CampPlayerModelControllerItem.generated.h"

class ACharacter;
class UAnimMontage;

UCLASS(Blueprintable)
class XRD777_API UCampPlayerModelControllerItem : public UCampModelControllerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacter> pCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* pCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* pDefaultMontage;
    
    UCampPlayerModelControllerItem();
};

