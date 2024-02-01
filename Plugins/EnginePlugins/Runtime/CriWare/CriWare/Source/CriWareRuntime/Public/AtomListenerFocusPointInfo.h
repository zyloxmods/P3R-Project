#pragma once
#include "CoreMinimal.h"
#include "AtomListenerFocusPointInfo.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomListenerFocusPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionLevel;
    
    FAtomListenerFocusPointInfo();
};

