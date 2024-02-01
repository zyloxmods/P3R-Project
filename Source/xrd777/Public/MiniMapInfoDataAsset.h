#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "MiniMapInfoTable.h"
#include "MiniMapInfoDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UMiniMapInfoDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMiniMapInfoTable> Data;
    
    UMiniMapInfoDataAsset();
};

