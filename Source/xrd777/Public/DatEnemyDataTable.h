#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatEnemyAttackTable.h"
#include "DatEnemyEventItemTable.h"
#include "DatEnemyItemTable.h"
#include "DatEnemyDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatEnemyDataTable : public FTableRowBase {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyItemTable item0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyItemTable item1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyItemTable item2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyItemTable item3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyEventItemTable eventitem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyAttackTable attack;
    
    XRD777_API FDatEnemyDataTable();
};

