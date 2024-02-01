#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BtlCamera.generated.h"

class ABtlActor;
class ACineCameraActor;

UCLASS(Blueprintable)
class XRD777_API ABtlCamera : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlActor* cameraMainCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABtlActor*> CameraTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACineCameraActor* MainCamera;
    
    ABtlCamera();
    UFUNCTION(BlueprintCallable)
    void SetCameraTargets(TArray<ABtlActor*> Targets);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraMainCharacter(ABtlActor* NewCameraMainCharacter);
    
    UFUNCTION(BlueprintCallable)
    TArray<ABtlActor*> GetCameraTargets();
    
    UFUNCTION(BlueprintCallable)
    ABtlActor* GetCameraMainCharacter();
    
};

