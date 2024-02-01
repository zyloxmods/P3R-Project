#pragma once
#include "CoreMinimal.h"
#include "DungeonTrophyValue.generated.h"

USTRUCT(BlueprintType)
struct FDungeonTrophyValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CounterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountMax;
    
    XRD777_API FDungeonTrophyValue();
};

