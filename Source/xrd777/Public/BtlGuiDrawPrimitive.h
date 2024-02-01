#pragma once
#include "CoreMinimal.h"
#include "BtlGuiDrawStructCore.h"
#include "BtlGuiVertex.h"
#include "EBtlGuiDrawType.h"
#include "BtlGuiDrawPrimitive.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FBtlGuiDrawPrimitive : public FBtlGuiDrawStructCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlGuiVertex> vertex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useAnriAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipAntiFirstVtx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool reverseAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool vertexLeftTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiDrawType drawType;
    
    XRD777_API FBtlGuiDrawPrimitive();
};

