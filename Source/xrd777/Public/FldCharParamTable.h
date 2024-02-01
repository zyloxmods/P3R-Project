#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FldCharParamTable.generated.h"

class UFldCharDataAsset;

UCLASS(Blueprintable)
class XRD777_API UFldCharParamTable : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFldCharDataAsset> Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFldCharDataAsset* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoaded;
    
public:
    UFldCharParamTable();
};

