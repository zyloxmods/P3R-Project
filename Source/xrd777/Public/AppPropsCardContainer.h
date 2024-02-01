#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "AppPropsCardData.h"
#include "AppPropsCardParam.h"
#include "Templates/SubclassOf.h"
#include "AppPropsCardContainer.generated.h"

class AAppPropsCore;
class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API AAppPropsCardContainer : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAppPropsCardData> CardList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAppPropsCore> PersonaCardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAppPropsCore> MajorCardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAppPropsCore> MinorCardClass;
    
public:
    AAppPropsCardContainer();
    UFUNCTION(BlueprintCallable)
    bool SyncCards();
    
    UFUNCTION(BlueprintCallable)
    void LoadCards(TArray<FAppPropsCardParam> Params);
    
    UFUNCTION(BlueprintCallable)
    TArray<FAppPropsCardData> GetCards();
    
    UFUNCTION(BlueprintCallable)
    void DestroyContainer(bool DestroyCardProps);
    
};

