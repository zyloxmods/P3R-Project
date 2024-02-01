#pragma once
#include "CoreMinimal.h"
#include "DungeonUIAlphaAnimData.h"
#include "DungeonUIPosAnimData.h"
#include "DungeonUIAnimData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonUIAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDungeonUIPosAnimData> PosAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDungeonUIAlphaAnimData> AlphaAnim;
    
    XRD777_API FDungeonUIAnimData();
};

