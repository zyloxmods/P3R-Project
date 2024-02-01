#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAppPropsCardType.h"
#include "AppPropsCardTable.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FAppPropsCardTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppPropsCardType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> Texture;
    
    XRD777_API FAppPropsCardTable();
};

