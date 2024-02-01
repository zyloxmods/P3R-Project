#pragma once
#include "CoreMinimal.h"
#include "BtlPhaseVictory.h"
#include "Templates/SubclassOf.h"
#include "BtlPhaseResult.generated.h"

class AActor;
class ABtlPhase;
class ABtlResultSceneBase;
class ABtlResultUIBase;
class ABtlShuffleMainBase;
class UAssetLoader;
class UBtlGuiDrawObjectRect;
class UBtlResultViewData;

UCLASS(Blueprintable)
class XRD777_API ABtlPhaseResult : public ABtlPhaseVictory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlResultSceneBase* _sceneBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlResultUIBase* _uiBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlResultViewData* _ViewData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlShuffleMainBase* _ShuffleMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlGuiDrawObjectRect* ReactBackGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABtlResultUIBase> ResutlUIBp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABtlShuffleMainBase> ShuffleUIBp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlPhase* PhaseVictory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hasVictoryPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isStartResultInVictory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReadyForExitByVictoryPhase;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> FoundActors;
    
public:
    ABtlPhaseResult();
    UFUNCTION(BlueprintCallable)
    void SetStartResultInVictory(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetHaveVictorySequence(bool flag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReleaseResource();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayResultUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreatePhaseVictory();
    
    UFUNCTION(BlueprintCallable)
    bool CheckAlreadyStartResult();
    
};

