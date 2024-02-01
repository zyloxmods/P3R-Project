#pragma once
#include "CoreMinimal.h"
#include "DungeonPathList.h"
#include "DungeonPathGroupList.generated.h"

USTRUCT(BlueprintType)
struct FDungeonPathGroupList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDungeonPathList> GroupList;
    
    XRD777_API FDungeonPathGroupList();
};

