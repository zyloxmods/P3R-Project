#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlgData.h"
#include "PlgAsset.generated.h"

UCLASS(Blueprintable)
class PLGASSETPLUGIN_API UPlgAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlgData PlgData;
    
    UPlgAsset();
};

