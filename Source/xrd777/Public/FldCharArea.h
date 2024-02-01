#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FldCharArea.generated.h"

class UBoxComponent;
class USceneComponent;

UCLASS(Blueprintable)
class XRD777_API AFldCharArea : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AreaComp;
    
    AFldCharArea();
};

