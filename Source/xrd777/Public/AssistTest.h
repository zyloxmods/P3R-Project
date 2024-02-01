#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "AssistTest.generated.h"

class UAssetLoader;
class UBmdAsset;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AAssistTest : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* BmdAsset_;
    
    AAssistTest();
};

