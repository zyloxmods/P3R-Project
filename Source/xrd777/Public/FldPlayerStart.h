#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "FldPlayerStart.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class XRD777_API AFldPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mIndex_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraDir;
    
public:
    AFldPlayerStart();
};

