#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "ItemNameListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UItemNameListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Data;
    
    UItemNameListTable();
};

