#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "CharacterSimpleLipsAnimAppListener.h"
#include "ECharacterSimpleLipsAnimAppStateType.h"
#include "CharacterSimpleLipsAnimAppComponent.generated.h"

class UAppCharBaseComp;
class UCharacterSimpleLipsAnimAppSubsystem;
class UCurveFloat;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UCharacterSimpleLipsAnimAppComponent : public UAppActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LipACurveDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentTotalLipDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentTotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RequestedTotalEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LipsPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StartLipsDelaySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LipACustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayerMajorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayerMinorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharacterSimpleLipsAnimAppListener CurrentLipsyncParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OwnerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAppCharBaseComp* AppCharacterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FFloatProperty> LipA_PropPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FFloatProperty> LipI_PropPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FFloatProperty> LipU_PropPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FFloatProperty> LipE_PropPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FFloatProperty> LipO_PropPath;
    
public:
    UCharacterSimpleLipsAnimAppComponent();
    UFUNCTION(BlueprintCallable)
    void OnChangeLipsState(ECharacterSimpleLipsAnimAppStateType LipSyncAppStateType, const FCharacterSimpleLipsAnimAppListener& LipsyncParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    UCharacterSimpleLipsAnimAppSubsystem* GetLipsSubsystem() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FindPropsPtr();
    
};

