#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterBaseCore.generated.h"

class UAnimMontage;
class UCBL_LoaderBase;
class UCB_HumanAnimPackAsset;
class UCB_HumanMeshPackAsset;
class UPrimitiveComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class CHARACTERBASE_API ACharacterBaseCore : public ACharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCBL_LoaderBase* _SkeletalMeshLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCBL_LoaderBase* _AnimBpLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> _SkeletalMeshCompArray;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _RecalcBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _AutoLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCB_HumanMeshPackAsset* _MeshPackAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 _PreviewMeshNo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 _PreviewCostumeNo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 _PreviewHairNo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 _PreviewFaceNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCB_HumanAnimPackAsset* _AnimPackAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 _PreviewMeshAnimNo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 _PreviewCostumeAnimNo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 _PreviewHairAnimNo;
    
    ACharacterBaseCore();
    UFUNCTION(BlueprintCallable)
    void ReCalculateBounds();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadEndEvent();
    
    UFUNCTION(BlueprintCallable)
    FName GetMontageSectionName(UAnimMontage* Montage, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastRenderTimeOnScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCompLastRenderTimeOnScreen(UPrimitiveComponent* MeshComp);
    
};

