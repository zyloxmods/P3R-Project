#pragma once
#include "CoreMinimal.h"
#include "AddContentsNameDispTable.h"
#include "AppDataAsset.h"
#include "AddContentNameDispTableDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UAddContentNameDispTableDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAddContentsNameDispTable> Data;
    
    UAddContentNameDispTableDataAsset();
};

