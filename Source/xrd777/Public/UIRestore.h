#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "Templates/SubclassOf.h"
#include "UIRestore.generated.h"

class ASaveLoadDraw;
class UAddContent;
class UAssetLoader;
class UDataTable;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API AUIRestore : public AAppActor {
    GENERATED_BODY()
public:
private:
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASaveLoadDraw> DrawActorSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASaveLoadDraw* DrawActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAddContent* AddContentCheck;
    
public:
    AUIRestore();
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedInAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedCloseAnim();
    
};

