#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AppCharFootstepsTable.generated.h"

class UAppCharFootstepsDataAsset;

UCLASS(Blueprintable)
class XRD777_API UAppCharFootstepsTable : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAppCharFootstepsDataAsset> Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppCharFootstepsDataAsset* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoaded;
    
public:
    UAppCharFootstepsTable();
};

