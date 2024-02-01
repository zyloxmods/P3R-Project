#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DLCPersonaCombineBirthTable.h"
#include "DLCPersonaCombineBirthDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDLCPersonaCombineBirthDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDLCPersonaCombineBirthTable> Data;
    
    UDLCPersonaCombineBirthDataAsset();
};

