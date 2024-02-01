#pragma once
#include "CoreMinimal.h"
#include "AtlEvtPlayBindingTagParameter.h"
#include "AtlEvtAssetOverrideParameter.generated.h"

USTRUCT(BlueprintType)
struct FAtlEvtAssetOverrideParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlEvtPlayBindingTagParameter BindingTagParameter;
    
    XRD777_API FAtlEvtAssetOverrideParameter();
};

