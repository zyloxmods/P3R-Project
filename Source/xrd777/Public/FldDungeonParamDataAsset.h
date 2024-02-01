#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DungeonParamDataTableRow.h"
#include "FldDungeonParamDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UFldDungeonParamDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonParamDataTableRow ParamData;
    
    UFldDungeonParamDataAsset();
    UFUNCTION(BlueprintCallable)
    void ImportLevelPath();
    
    UFUNCTION(BlueprintCallable)
    void ImportDataPath();
    
    UFUNCTION(BlueprintCallable)
    void GenEnemyModelID();
    
    UFUNCTION(BlueprintCallable)
    void DelResetData();
    
    UFUNCTION(BlueprintCallable)
    void AddResetData();
    
};

