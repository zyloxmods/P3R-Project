#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KernelActor.generated.h"

class ACameraActor;
class UDebugMenu;
class UKernelWidget;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AKernelActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* _DebugCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* _OldCamera;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKernelWidget* _KernelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenu* mpDebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mpChildActor;
    
    AKernelActor();
};

