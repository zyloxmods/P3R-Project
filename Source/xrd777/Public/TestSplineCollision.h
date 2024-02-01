#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestSplineCollision.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class ATestSplineCollision : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    ATestSplineCollision();
};

