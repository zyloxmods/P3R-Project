#pragma once
#include "CoreMinimal.h"
#include "SprData.h"
#include "SprDataArray.generated.h"

USTRUCT(BlueprintType)
struct FSprDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSprData> SprDatas;
    
    SPRASSETPLUGIN_API FSprDataArray();
};

