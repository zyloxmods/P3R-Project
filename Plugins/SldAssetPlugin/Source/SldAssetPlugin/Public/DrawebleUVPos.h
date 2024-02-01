#pragma once
#include "CoreMinimal.h"
#include "DrawebleUVPos.generated.h"

USTRUCT(BlueprintType)
struct FDrawebleUVPos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float U0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float U1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float V0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float v1;
    
    SLDASSETPLUGIN_API FDrawebleUVPos();
};

