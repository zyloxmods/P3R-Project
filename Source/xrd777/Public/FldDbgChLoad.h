#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FldDbgChLoad.generated.h"

class UAnimInstance;
class UAppCharLoader;
class UObject;

UCLASS(Blueprintable)
class XRD777_API AFldDbgChLoad : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UAnimInstance>> AnimInsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* InitSkel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* InitAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> loadedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppCharLoader* Loader;
    
public:
    AFldDbgChLoad();
};

