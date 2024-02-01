#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatDataOffDataTable.h"
#include "DatDataOffTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatDataOffTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatDataOffDataTable> Data;
    
    UDatDataOffTable();
};

