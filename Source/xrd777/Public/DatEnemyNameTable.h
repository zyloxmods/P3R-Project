#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatEnemyName.h"
#include "DatEnemyNameTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatEnemyNameTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatEnemyName> Data;
    
    UDatEnemyNameTable();
};

