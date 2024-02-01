#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FldEnemyFootprintAsset.h"
#include "FldEnemyFootprintDA.generated.h"

UCLASS(Blueprintable)
class XRD777_API UFldEnemyFootprintDA : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldEnemyFootprintAsset> Assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Span;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDuration;
    
    UFldEnemyFootprintDA();
};

