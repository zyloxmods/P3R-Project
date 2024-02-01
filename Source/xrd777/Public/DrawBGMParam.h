#pragma once
#include "CoreMinimal.h"
#include "DrawBGMParam.generated.h"

USTRUCT(BlueprintType)
struct FDrawBGMParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BgmId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewFlag;
    
    XRD777_API FDrawBGMParam();
};

