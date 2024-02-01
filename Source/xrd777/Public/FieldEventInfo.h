#pragma once
#include "CoreMinimal.h"
#include "FieldEventInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFieldEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FieldCameraActor;
    
    XRD777_API FFieldEventInfo();
};

