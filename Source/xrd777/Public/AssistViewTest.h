#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "AssistViewTest.generated.h"

class UAssetLoader;
class UBmdAsset;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AAssistViewTest : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* BmdAsset_;
    
    AAssistViewTest();
};

