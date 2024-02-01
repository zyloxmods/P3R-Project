#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatFadeOutDataTable.h"
#include "DatFadeOutTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatFadeOutTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatFadeOutDataTable> Data;
    
    UDatFadeOutTable();
};

