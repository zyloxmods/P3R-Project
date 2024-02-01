#pragma once
#include "CoreMinimal.h"
#include "FldDungeonFloorDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FFldDungeonFloorDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 flags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 FieldMajor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 FieldMinor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 major;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Minor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 areaNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 envID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 partMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 partMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 partSelTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 enemyMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 enemyMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 strongEnemyProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 strongEnemyMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 rareEnemyProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 rareEnemyMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 repopNormalNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 repopNormalStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 repopNormalRare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 repopStrongNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 repopStrongStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 repopStrongRare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 repopRareNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 repopRareStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 repopRareRare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float reaper;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 encountPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 strongEncountPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 pinchEncountPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 pinchStrongEncountPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 rareEncountPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 continousEncount1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 continousEncount2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 doorGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 doorProbability;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 returnDevProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 tboxMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 tboxMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 tboxType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 moneyProbability;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 moneyMin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 moneyMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 tboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 rareTboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 jewelryTboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 primFieldTboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal1TboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal2TboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal3TboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal4TboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal5TboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 medal6TboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 doorTboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 doorRareTboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 doorJewelryTboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 doorPrimFieldTboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 doorMedal1TboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 doorMedal2TboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 doorMedal3TboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 doorMedal4TboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 doorMedal5TboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 doorMedal6TboxPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 missingPersonID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 missingBuildID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 scrFileNo;
    
    XRD777_API FFldDungeonFloorDataAssetRecord();
};

