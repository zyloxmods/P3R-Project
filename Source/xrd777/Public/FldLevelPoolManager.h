#pragma once
#include "CoreMinimal.h"
#include "FldLocalActor.h"
#include "FldLevelPoolManager.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldLevelPoolManager : public AFldLocalActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> mLevelPaths_;
    
public:
    AFldLevelPoolManager();
};

