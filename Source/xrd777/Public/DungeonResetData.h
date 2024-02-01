#pragma once
#include "CoreMinimal.h"
#include "EDungeonResetDataType.h"
#include "DungeonResetData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonResetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonResetDataType DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataState;
    
    XRD777_API FDungeonResetData();
};

