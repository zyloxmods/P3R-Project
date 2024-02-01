#pragma once
#include "CoreMinimal.h"
#include "BtlGuiDrawStructCore.h"
#include "BtlGuiVertex.h"
#include "BtlGuiDrawLineFrame.generated.h"

USTRUCT(BlueprintType)
struct FBtlGuiDrawLineFrame : public FBtlGuiDrawStructCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlGuiVertex> vertex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lineLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useAnriAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool reverseAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool vertexLeftTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool outStretch;
    
    XRD777_API FBtlGuiDrawLineFrame();
};

