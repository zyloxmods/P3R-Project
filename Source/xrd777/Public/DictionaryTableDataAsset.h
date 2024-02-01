#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DictionaryTableData.h"
#include "DictionaryTableDataAsset.generated.h"

UCLASS(Blueprintable)
class UDictionaryTableDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDictionaryTableData> Tables;
    
    UDictionaryTableDataAsset();
};

