#pragma once
#include "CoreMinimal.h"
#include "Uim2DVertCol.generated.h"

USTRUCT(BlueprintType)
struct FUim2DVertCol {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Color;
    
    UIMASSETPLUGIN_API FUim2DVertCol();
};

