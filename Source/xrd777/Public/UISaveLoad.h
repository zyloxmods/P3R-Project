#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "Templates/SubclassOf.h"
#include "UISaveLoad.generated.h"

class ASaveLoadDraw;
class AUISystemMsgActor;
class UAddContent;
class UAssetLoader;
class UDataTable;
class UUILayoutDataTable;
class UXrd777SaveManager;

UCLASS(Blueprintable)
class XRD777_API AUISaveLoad : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAddContent* AddContentCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* SaveLoadLayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* SaveLoadLayoutDataTable2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* SaveLoadDateLayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pParamLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pParamLayoutData2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pParamDateLayoutData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUISystemMsgActor* NetworkConnectionDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UXrd777SaveManager* SaveManagerInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASaveLoadDraw> DrawActorSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASaveLoadDraw* DrawActor;
    
public:
    AUISaveLoad();
    UFUNCTION(BlueprintCallable)
    void OnFinishedInAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedCloseAnim();
    
};

