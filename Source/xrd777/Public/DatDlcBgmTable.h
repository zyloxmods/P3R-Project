#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatDlcBgmTableData.h"
#include "DatDlcBgmTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatDlcBgmTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatDlcBgmTableData> Data;
    
    UDatDlcBgmTable();
};

