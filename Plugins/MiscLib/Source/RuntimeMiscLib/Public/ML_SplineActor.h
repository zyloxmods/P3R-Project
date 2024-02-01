#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ML_SplineActor.generated.h"

class UML_SplineComponent;
class UML_TargetMarkerComponent;

UCLASS(Blueprintable)
class RUNTIMEMISCLIB_API AML_SplineActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UML_SplineComponent* _SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UML_TargetMarkerComponent* _TargetMarkerComponent;
    
    AML_SplineActor();
    UFUNCTION(BlueprintCallable)
    void SetMarkerVisibility(bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerPosition(int32 Index, FVector Position);
    
};

