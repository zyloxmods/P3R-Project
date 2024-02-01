#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MsgTest.generated.h"

class UBmdAsset;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AMsgTest : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* mpBmdAsset;
    
public:
    AMsgTest();
};

