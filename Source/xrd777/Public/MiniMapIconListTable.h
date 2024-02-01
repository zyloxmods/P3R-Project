#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "MiniMapIconList.h"
#include "MiniMapIconListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UMiniMapIconListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMiniMapIconList> Data;
    
    UMiniMapIconListTable();
};

