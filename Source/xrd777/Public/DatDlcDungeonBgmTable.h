#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatDlcDungeonBgmTableData.h"
#include "DatDlcDungeonBgmTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatDlcDungeonBgmTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatDlcDungeonBgmTableData> Data;
    
    UDatDlcDungeonBgmTable();
};

