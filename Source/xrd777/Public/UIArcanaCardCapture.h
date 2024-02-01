#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIDrawBaseActor.h"
#include "UIArcanaCardCapture.generated.h"

class AAppPropsCardContainer;
class AAppPropsCore;
class AUICmmRankUPAnimManager;
class AUISceneCapture;
class UAnimSequenceBase;
class UNiagaraComponent;
class UNiagaraSystem;
class USkeletalMeshComponent;
class UTexture;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AUIArcanaCardCapture : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* pModelCaptureTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppPropsCardContainer* CardContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppPropsCore* CardBp;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimSequence[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUISceneCapture* pUISceneCapture2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUISceneCapture> UISceneCaptureClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICmmRankUPAnimManager* AnimManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* CardEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* EffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeltalComponent;
    
public:
    AUIArcanaCardCapture();
    UFUNCTION(BlueprintCallable)
    void StartPoemOutAnime();
    
    UFUNCTION(BlueprintCallable)
    void StartAnimeReverse();
    
    UFUNCTION(BlueprintCallable)
    void StartAnimeRecoveryTurn();
    
    UFUNCTION(BlueprintCallable)
    void StartAnimeRecoveryOutv();
    
    UFUNCTION(BlueprintCallable)
    void StartAnimeRecoveryIn();
    
    UFUNCTION(BlueprintCallable)
    void FadeOutEffect();
    
    UFUNCTION(BlueprintCallable)
    void FadeInEffect();
    
};

