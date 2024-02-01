#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DungeonBrokenObjData.h"
#include "DungeonEnemyModelIDData.h"
#include "DungeonEnemyModelParamData.h"
#include "DungeonFDoorAppearanceData.h"
#include "DungeonLightAttenuationData.h"
#include "DungeonMDoorEncountIDData.h"
#include "DungeonPartConnectInfoData.h"
#include "DungeonPartOpenInfoData.h"
#include "DungeonPathGroupList.h"
#include "DungeonPathList.h"
#include "DungeonResetList.h"
#include "DungeonTrophyValue.h"
#include "DungeonUROParamData.h"
#include "EDungeonLevelPathType.h"
#include "EDungeonMisNpcType.h"
#include "EDungeonPathType.h"
#include "EDungeonResetTiming.h"
#include "EDungeonTrophyType.h"
#include "EPartType.h"
#include "DungeonParamDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FDungeonParamDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDungeonTrophyType, FDungeonTrophyValue> TrophyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDungeonResetTiming, FDungeonResetList> ResetTimingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPartType, FDungeonPartConnectInfoData> PartConnectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonPartOpenInfoData PartOpenInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FDungeonLightAttenuationData> PartLightAttenuationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonLightAttenuationData ObjectLightAttenuationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonUROParamData PartUROParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonUROParamData ObjectUROParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonBrokenObjData BrokenObjData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonFDoorAppearanceData FDoorAppearanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FDungeonEnemyModelIDData> EnemyModelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FDungeonEnemyModelParamData> EnemyModelParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> MDoorBuildID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FDungeonMDoorEncountIDData> MDoorEncountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, EDungeonMisNpcType> MisNpcType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDungeonPathType, FDungeonPathGroupList> DataPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDungeonLevelPathType, FDungeonPathList> LevelPath;
    
    XRD777_API FDungeonParamDataTableRow();
};

