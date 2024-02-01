#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "BtlShuffleArcanaManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class XRD777_API ABtlShuffleArcanaManager : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RemainMajorArcana;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RemainMinorArcana;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> FoundActors;
    
public:
    ABtlShuffleArcanaManager();
};

