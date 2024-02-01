#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "PreviewWorldUpdater.generated.h"

class ASceneCapture2D;
class UNiagaraComponent;
class UWorld;

UCLASS(Blueprintable)
class OFFSCREENRENDERING_API APreviewWorldUpdater : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetTargetActor, AActor*, Actor);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* PreviewWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CameraAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CameraPosBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGazeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PointOfGazeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GazeOffsetBoneName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CameraTransform;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASceneCapture2D> SceneCaptureActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> Niagaras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* OneShotEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnPendingActorClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetTargetActor OnSetTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAntialias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTAA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsToneCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBloom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExposure;
    
public:
    APreviewWorldUpdater();
    UFUNCTION(BlueprintCallable)
    AActor* SpawnAttachedActor(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    AActor* SetTargetActor(TSubclassOf<AActor> ActorClass, bool IsResetCamera);
    
    UFUNCTION(BlueprintCallable)
    void SetGazeOffsetBoneName(const FString& NewGazeOffsetBoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetGazeOffset(FVector NewGazeOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetGazeMode(bool NewGazeMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFoV(float NewFOV);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraTransform(FTransform NewCameraTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraPosition(FVector NewCameraPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraPosBoneName(const FString& NewCameraPosBoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraAngle(FRotator NewCameraAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASceneCapture2D* GetSceneCaptureActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetPreviewWorld() const;
    
    UFUNCTION(BlueprintCallable)
    void Cleanup();
    
};

