#pragma once
#include "CoreMinimal.h"
#include "FldAnimalComp_BIRD.h"
#include "FldAnimalComp_PIGEON.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldAnimalComp_PIGEON : public UFldAnimalComp_BIRD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mRunAwayDist_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mHeroNearDist_;
    
    UFldAnimalComp_PIGEON();
};

