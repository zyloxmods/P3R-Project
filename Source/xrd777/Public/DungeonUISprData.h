#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DungeonUIBaseData.h"
#include "DungeonUIMaskInfo.h"
#include "EDungeonUISpriteOrigin.h"
#include "EDungeonUISpriteType.h"
#include "DungeonUISprData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonUISprData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonUIBaseData BaseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonUIMaskInfo MaskInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonUISpriteType SprType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 grpNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SprNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonUISpriteOrigin Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Pos;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RGBA[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleMin[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleMax[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MsgWSync;
    
    XRD777_API FDungeonUISprData();
};

