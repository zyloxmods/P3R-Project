#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatCalcPANICDropItemRecord.h"
#include "DatCalcPANICDropItemTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatCalcPANICDropItemTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatCalcPANICDropItemRecord> Data;
    
    UDatCalcPANICDropItemTable();
};

