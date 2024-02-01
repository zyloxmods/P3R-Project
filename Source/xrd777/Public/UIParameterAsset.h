#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIParameter.h"
#include "UIParameterAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UUIParameterAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIParameter> UIParameters;
    
    UUIParameterAsset();
};

