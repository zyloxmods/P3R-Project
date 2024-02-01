#pragma once
#include "CoreMinimal.h"
#include "Uim2DVertUV.generated.h"

USTRUCT(BlueprintType)
struct FUim2DVertUV {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float U0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float V0;
    
    UIMASSETPLUGIN_API FUim2DVertUV();
};

