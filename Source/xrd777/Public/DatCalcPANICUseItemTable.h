#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatCalcPANICUseItemRecord.h"
#include "DatCalcPANICUseItemTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatCalcPANICUseItemTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatCalcPANICUseItemRecord> Data;
    
    UDatCalcPANICUseItemTable();
};

