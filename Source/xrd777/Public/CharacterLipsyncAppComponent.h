#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "ELipSyncAppStateType.h"
#include "LipsyncAppListener.h"
#include "CharacterLipsyncAppComponent.generated.h"

class UAppCharBaseComp;
class UCurveFloat;
class ULipsyncAppObserverSubsystem;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UCharacterLipsyncAppComponent : public UAppActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLipsyncAppListener CurrentLipsyncParam;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float mCurrentTotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* mLipACurveDefault;
    
public:
    UCharacterLipsyncAppComponent();
    UFUNCTION(BlueprintCallable)
    void OnChangeLipsyncState(ELipSyncAppStateType LipSyncAppStateType, const FLipsyncAppListener& LipsyncParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    ULipsyncAppObserverSubsystem* GetLipsyncSubsystem() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FindLipPropsPtr();
    
};

