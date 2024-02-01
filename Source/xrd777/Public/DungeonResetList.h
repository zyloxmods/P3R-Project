#pragma once
#include "CoreMinimal.h"
#include "DungeonResetData.h"
#include "DungeonResetList.generated.h"

USTRUCT(BlueprintType)
struct FDungeonResetList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDungeonResetData> ResetData;
    
    XRD777_API FDungeonResetList();
};

