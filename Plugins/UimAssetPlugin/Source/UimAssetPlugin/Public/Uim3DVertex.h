#pragma once
#include "CoreMinimal.h"
#include "Uim3DVertex.generated.h"

USTRUCT(BlueprintType)
struct FUim3DVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Z;
    
    UIMASSETPLUGIN_API FUim3DVertex();
};

