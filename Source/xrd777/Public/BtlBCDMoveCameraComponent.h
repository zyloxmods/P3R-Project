#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EBtlCutsceneMoveMode.h"
#include "BtlBCDMoveCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlBCDMoveCameraComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EBtlCutsceneMoveMode MoveMode;
    
    UBtlBCDMoveCameraComponent();
};

