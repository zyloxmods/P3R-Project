#pragma once
#include "CoreMinimal.h"
#include "PlgPrimitiveData.h"
#include "PlgData.generated.h"

USTRUCT(BlueprintType)
struct PLGASSETPLUGIN_API FPlgData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlgPrimitiveData> PlgDatas;
    
    FPlgData();
};

