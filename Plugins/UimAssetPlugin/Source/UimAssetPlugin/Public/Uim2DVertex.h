#pragma once
#include "CoreMinimal.h"
#include "Uim2DVertex.generated.h"

USTRUCT(BlueprintType)
struct FUim2DVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    UIMASSETPLUGIN_API FUim2DVertex();
};

