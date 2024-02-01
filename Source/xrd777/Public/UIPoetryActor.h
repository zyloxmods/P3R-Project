#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "Templates/SubclassOf.h"
#include "UIPoetryActor.generated.h"

class AUICmmRankUPAnimManager;
class AUIPoetryDraw;
class UAssetLoader;
class UUIPoetryDataAsset;
class UUIPoetryRippleDataAsset;

UCLASS(Blueprintable)
class XRD777_API AUIPoetryActor : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIPoetryDataAsset* PoetryData_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIPoetryRippleDataAsset* PoetryRippleData_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICmmRankUPAnimManager* AnimManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUIPoetryDraw> UIPoetryDrawClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIPoetryDraw* pUIPoetryDraw;
    
public:
    AUIPoetryActor();
};

