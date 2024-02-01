#pragma once
#include "CoreMinimal.h"
#include "AtlHandwritingNiagaraRequestAbsoluteFlag.generated.h"

USTRUCT(BlueprintType)
struct FAtlHandwritingNiagaraRequestAbsoluteFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbsoluteLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbsoluteRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbsoluteScale;
    
    XRD777_API FAtlHandwritingNiagaraRequestAbsoluteFlag();
};

