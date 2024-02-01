#pragma once
#include "CoreMinimal.h"
#include "PVectore.h"
#include "DrawebleVertexPos.generated.h"

USTRUCT(BlueprintType)
struct FDrawebleVertexPos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPVectore V00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPVectore V01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPVectore V10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPVectore V11;
    
    SLDASSETPLUGIN_API FDrawebleVertexPos();
};

