#pragma once
#include "CoreMinimal.h"
#include "AppCharTransparency.h"
#include "FldHeadIconData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFldHeadIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mClassIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharTransparency mTransparency;
    
    XRD777_API FFldHeadIconData();
};

