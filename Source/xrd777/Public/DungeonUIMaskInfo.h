#pragma once
#include "CoreMinimal.h"
#include "DungeonUIMaskInfo.generated.h"

USTRUCT(BlueprintType)
struct FDungeonUIMaskInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaskOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaskTargetName;
    
    XRD777_API FDungeonUIMaskInfo();
};

