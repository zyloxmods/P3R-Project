#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatEnemyAnalyzeSyncDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatEnemyAnalyzeSyncDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 enemyID0;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 enemyID1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 enemyID2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 enemyID3;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 enemyID4;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 enemyID5;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 enemyID6;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 enemyID7;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 enemyID8;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 enemyID9;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Comment;
    
    XRD777_API FDatEnemyAnalyzeSyncDataTable();
};

