#pragma once
#include "CoreMinimal.h"
#include "DungeonUIBaseData.h"
#include "DungeonUIMaskInfo.h"
#include "DungeonUIVertexData.h"
#include "DungeonUIPrimData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonUIPrimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonUIBaseData BaseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonUIMaskInfo MaskInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDungeonUIVertexData> vertex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Z;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RGBA[4];
    
    XRD777_API FDungeonUIPrimData();
};

