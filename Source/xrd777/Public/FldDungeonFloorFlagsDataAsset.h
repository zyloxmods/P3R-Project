#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DungeonFloorFlagsDataTableRow.h"
#include "DungeonFloorFlagsIDData.h"
#include "FldDungeonFloorFlagsDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UFldDungeonFloorFlagsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDungeonFloorFlagsIDData> IDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonFloorFlagsDataTableRow FloorFlagsTbl;
    
    UFldDungeonFloorFlagsDataAsset();
    UFUNCTION(BlueprintCallable)
    void SearchTag();
    
    UFUNCTION(BlueprintCallable)
    void SearchFloor();
    
    UFUNCTION(BlueprintCallable)
    void SearchFlag();
    
    UFUNCTION(BlueprintCallable)
    void Input();
    
};

