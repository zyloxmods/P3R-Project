#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DarkHourWork.h"
#include "HmModelTestActor.generated.h"

class ACameraActor;
class UStaticMesh;

UCLASS(Blueprintable)
class XRD777_API AHmModelTestActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* MeshAry[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* pMayaCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* pOldCamera;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDarkHourWork Work;
    
public:
    AHmModelTestActor();
};

