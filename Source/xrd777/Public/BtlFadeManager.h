#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "BattleFadeDelegateDelegate.h"
#include "BtlFadeParam.h"
#include "EBtlFadeType.h"
#include "Templates/SubclassOf.h"
#include "BtlFadeManager.generated.h"

class ABtlFadeManager;
class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API ABtlFadeManager : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleFadeDelegate OnFadeOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleFadeDelegate OnFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFadeing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isScreenWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEnemyFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAIActionFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlFadeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlFadeType ReceaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrossFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossfadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossFadeMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LastFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlFadeParam> fadeParam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABtlFadeManager> LoadClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pLoader;
    
public:
    ABtlFadeManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInit(bool isFadeOut);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearDrawItem();
    
    UFUNCTION(BlueprintCallable)
    static bool BtlFadeSync();
    
    UFUNCTION(BlueprintCallable)
    static void BtlFadeOut(EBtlFadeType NewType, int32 Frame, bool IsEnemy, bool isAIAction);
    
    UFUNCTION(BlueprintCallable)
    static ABtlFadeManager* BtlFadeManagerGetInstance();
    
    UFUNCTION(BlueprintCallable)
    static void BtlFadeIn(EBtlFadeType NewType, int32 Frame, bool IsEnemy, bool isAIAction);
    
    UFUNCTION(BlueprintCallable)
    static bool BtlFadeCheckScreenWrap();
    
    UFUNCTION(BlueprintCallable)
    static void BtlCrossFadeOut();
    
    UFUNCTION(BlueprintCallable)
    static void BtlCrossFadeIn(int32 Frame);
    
};

