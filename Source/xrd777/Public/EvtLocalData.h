#pragma once
#include "CoreMinimal.h"
#include "EvtLocalData.generated.h"

USTRUCT(BlueprintType)
struct FEvtLocalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LocalDatas;
    
    XRD777_API FEvtLocalData();
};

