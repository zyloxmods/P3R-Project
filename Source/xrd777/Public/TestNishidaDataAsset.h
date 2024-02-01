#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "TestNishidaDataTable.h"
#include "TestNishidaDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UTestNishidaDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTestNishidaDataTable> Data;
    
    UTestNishidaDataAsset();
};

