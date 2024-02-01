#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "PoetryParamTable.h"
#include "UIPoetryDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UUIPoetryDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoetryParamTable> Data;
    
    UUIPoetryDataAsset();
};

