#pragma once
#include "CoreMinimal.h"
#include "AppMultiDataAsset.h"
#include "CoefficientInfo.h"
#include "UniqCoefficient.h"
#include "CoefficientDataAsset.generated.h"

UCLASS(Blueprintable)
class UCoefficientDataAsset : public UAppMultiDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCoefficientInfo> GeneralTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniqCoefficient> UniqTables;
    
    UCoefficientDataAsset();
};

