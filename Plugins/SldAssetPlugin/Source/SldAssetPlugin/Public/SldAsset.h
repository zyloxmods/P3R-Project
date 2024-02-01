#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SprLayoutEditResources.h"
#include "SprLayoutEditScene.h"
#include "SldAsset.generated.h"

UCLASS(Blueprintable)
class SLDASSETPLUGIN_API USldAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSprLayoutEditResources> TargetResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSprLayoutEditScene> SceneDatas;
    
    USldAsset();
};

