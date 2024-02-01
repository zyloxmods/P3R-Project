#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DungeonUIBaseData.h"
#include "EDungeonUIFontStyle.h"
#include "DungeonUIMsgData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonUIMsgData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonUIBaseData BaseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonUIFontStyle fontStyle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FontRGBA[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineBreakWidth;
    
    XRD777_API FDungeonUIMsgData();
};

