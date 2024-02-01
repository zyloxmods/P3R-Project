#pragma once
#include "CoreMinimal.h"
#include "AddContentTable.h"
#include "AppDataAsset.h"
#include "AddContentTableDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UAddContentTableDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAddContentTable> Data;
    
    UAddContentTableDataAsset();
};

