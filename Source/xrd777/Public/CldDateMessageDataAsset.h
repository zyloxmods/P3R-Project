#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "CldDateMessageMonth.h"
#include "CldDateMessageDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UCldDateMessageDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCldDateMessageMonth> Data;
    
public:
    UCldDateMessageDataAsset();
};

