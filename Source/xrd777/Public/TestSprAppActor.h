#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "TestSprAppActor.generated.h"

class USprAsset;

UCLASS(Blueprintable)
class XRD777_API ATestSprAppActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* mpTestSpr;
    
    ATestSprAppActor();
};

