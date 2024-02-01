#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "MiniMapOffsetTable.h"
#include "MiniMapOffsetDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UMiniMapOffsetDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMiniMapOffsetTable> Data;
    
    UMiniMapOffsetDataAsset();
};

