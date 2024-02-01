#pragma once
#include "CoreMinimal.h"
#include "Uim3DVertCol.generated.h"

USTRUCT(BlueprintType)
struct FUim3DVertCol {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Z;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Color;
    
    UIMASSETPLUGIN_API FUim3DVertCol();
};

