#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIDungeonTransferCloudParam.generated.h"

USTRUCT(BlueprintType)
struct FUIDungeonTransferCloudParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SprNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    XRD777_API FUIDungeonTransferCloudParam();
};

