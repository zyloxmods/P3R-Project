#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "DatItemActor.generated.h"

class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API ADatItemActor : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* mAssetLoader_;
    
public:
    ADatItemActor();
};

