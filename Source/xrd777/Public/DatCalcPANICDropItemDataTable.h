#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatEnemyItemTable.h"
#include "DatCalcPANICDropItemDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatCalcPANICDropItemDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyItemTable item0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyItemTable item1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyItemTable item2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyItemTable item3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatEnemyItemTable item4;
    
    XRD777_API FDatCalcPANICDropItemDataTable();
};

