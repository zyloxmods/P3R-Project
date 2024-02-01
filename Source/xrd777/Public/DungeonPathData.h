#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DungeonPathData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonPathData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 majorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 minorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StrPath;
    
    XRD777_API FDungeonPathData();
};

