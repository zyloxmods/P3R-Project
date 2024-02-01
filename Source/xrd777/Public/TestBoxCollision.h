#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestBoxCollision.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ATestBoxCollision : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionComponent;
    
public:
    ATestBoxCollision();
};

