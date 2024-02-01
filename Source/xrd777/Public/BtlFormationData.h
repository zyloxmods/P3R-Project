#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BtlFormationUnit.h"
#include "BtlFormationData.generated.h"

USTRUCT(BlueprintType)
struct FBtlFormationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlFormationUnit> PlayerPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlFormationUnit> EnemyPositions;
    
    XRD777_API FBtlFormationData();
};

