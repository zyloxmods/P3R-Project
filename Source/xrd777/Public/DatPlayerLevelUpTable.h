#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatPlayerLevelUpDataRecord.h"
#include "DatPlayerLevelUpTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatPlayerLevelUpTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatPlayerLevelUpDataRecord> Data;
    
    UDatPlayerLevelUpTable();
};

