#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIBaseActor.h"
#include "UIConfiguration.generated.h"

class AUIConfigurationDraw;
class AUISystemMsgActor;
class UAssetLoader;
class UConfigBGMSelectDialog;
class UConfigDungeonBGMSelectDialog;
class UDataTable;
class USprAsset;

UCLASS(Blueprintable)
class XRD777_API AUIConfiguration : public AUIBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConfigBGMSelectDialog* ConfigBGMSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConfigDungeonBGMSelectDialog* ConfigDungeonBGMSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ConfigTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUISystemMsgActor* NetWaitDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUIConfigurationDraw> DrawActorSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIConfigurationDraw* DrawActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* pKeySpr;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HelpLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pParamLayoutDataConfigText;
    
    AUIConfiguration();
    UFUNCTION(BlueprintCallable)
    void OnDrawClosed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDifficultCancel(bool inIsCancel);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnConfigInAnimFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnConfigCancel(bool inIsCancel);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBgmSetAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnBGMInAnimFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsWindowDraw();
    
};

