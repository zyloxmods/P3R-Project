#pragma once
#include "CoreMinimal.h"
#include "AddContentsBundleNameTable.h"
#include "AppDataAsset.h"
#include "AddContentBundleNameTableDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UAddContentBundleNameTableDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAddContentsBundleNameTable> Data;
    
    UAddContentBundleNameTableDataAsset();
};

