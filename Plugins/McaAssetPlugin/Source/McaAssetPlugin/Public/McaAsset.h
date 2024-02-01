#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "McaData.h"
#include "McaAsset.generated.h"

UCLASS(Blueprintable)
class MCAASSETPLUGIN_API UMcaAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcaData McaData;
    
    UMcaAsset();
};

