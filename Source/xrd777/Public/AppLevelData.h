#pragma once
#include "CoreMinimal.h"
#include "EAppLevelType.h"
#include "AppLevelData.generated.h"

USTRUCT(BlueprintType)
struct FAppLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppLevelType mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mReferenceCounter;
    
    XRD777_API FAppLevelData();
};

