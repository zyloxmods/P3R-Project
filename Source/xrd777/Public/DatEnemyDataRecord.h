#pragma once
#include "CoreMinimal.h"
#include "DatEnemyAttackTable.h"
#include "DatEnemyEventItemTable.h"
#include "DatEnemyItemTable.h"
#include "DatEnemyDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatEnemyDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Race;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Params[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Skill[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Exp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 money;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyItemTable Item[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyEventItemTable eventitem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyAttackTable attack;
    
    XRD777_API FDatEnemyDataRecord();
};

