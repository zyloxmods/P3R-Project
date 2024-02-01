#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "SupportBustupParam.h"
#include "SupportBustupDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API USupportBustupDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSupportBustupParam> Data;
    
    USupportBustupDataAsset();
};

