#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECldTimeZone.h"
#include "Templates/SubclassOf.h"
#include "Loading.generated.h"

class ALoadingDraw;
class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API ULoading : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALoadingDraw* pLoadingDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALoadingDraw> LoadingDrawClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
public:
    ULoading();
    UFUNCTION(BlueprintCallable)
    void Start(ECldTimeZone Time);
    
    UFUNCTION(BlueprintCallable)
    void SpawnDrawActor(ALoadingDraw* LoadingDraw);
    
    UFUNCTION(BlueprintCallable)
    void End();
    
};

