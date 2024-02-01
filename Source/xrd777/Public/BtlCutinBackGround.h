#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BtlCutinBackGround.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FBtlCutinBackGround : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> BackGround;
    
    XRD777_API FBtlCutinBackGround();
};

