#pragma once
#include "CoreMinimal.h"
#include "EDungeonUIBlendStateType.h"
#include "DungeonUIBaseData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonUIBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DrawOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonUIBlendStateType BlendStateType;
    
    XRD777_API FDungeonUIBaseData();
};

