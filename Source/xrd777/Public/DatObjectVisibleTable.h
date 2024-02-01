#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatObjectVisibleDataTable.h"
#include "DatObjectVisibleTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatObjectVisibleTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatObjectVisibleDataTable> Data;
    
    UDatObjectVisibleTable();
};

