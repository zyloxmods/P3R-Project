#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "EMobWalkTargetType.h"
#include "MobWalkTarget.generated.h"

UCLASS(Blueprintable)
class CHARACTERBASE_API AMobWalkTarget : public ATargetPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMobWalkTargetType mType_;
    
public:
    AMobWalkTarget();
    UFUNCTION(BlueprintCallable)
    EMobWalkTargetType GetTargetType();
    
};

