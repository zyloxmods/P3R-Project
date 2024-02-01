#pragma once
#include "CoreMinimal.h"
#include "DungeonPartConnectInfoData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonPartConnectInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConnectUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConnectLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConnectDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConnectRight;
    
    XRD777_API FDungeonPartConnectInfoData();
};

