#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BtlCutsceneData.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FBtlCutsceneData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Cutscene;
    
    XRD777_API FBtlCutsceneData();
};

