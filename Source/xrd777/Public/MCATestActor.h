#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MCATestActor.generated.h"

class ACameraActor;
class UMcaAsset;

UCLASS(Blueprintable)
class XRD777_API AMCATestActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMcaAsset* m_pMcaCam0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* pMayaCamera;
    
public:
    AMCATestActor();
};

