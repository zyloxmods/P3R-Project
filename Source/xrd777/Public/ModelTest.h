#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ModelTest.generated.h"

class UModelTestComp;

UCLASS(Blueprintable)
class AModelTest : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModelTestComp* mpModelTestComp;
    
public:
    AModelTest();
};

