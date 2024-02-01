#pragma once
#include "CoreMinimal.h"
#include "BtlAnalyzeHighAnalyzePrimitive.generated.h"

class UBtlGuiDrawObjectPrimitive;

USTRUCT(BlueprintType)
struct FBtlAnalyzeHighAnalyzePrimitive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlGuiDrawObjectPrimitive* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PosX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PosY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isReflectX;
    
    XRD777_API FBtlAnalyzeHighAnalyzePrimitive();
};

