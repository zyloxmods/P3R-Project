#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "FileNameList.h"
#include "FileNameListAssets.generated.h"

UCLASS(Blueprintable)
class XRD777_API UFileNameListAssets : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFileNameList> Data;
    
    UFileNameListAssets();
};

