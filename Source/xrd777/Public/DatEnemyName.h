#pragma once
#include "CoreMinimal.h"
#include "DatEnemyName.generated.h"

USTRUCT(BlueprintType)
struct FDatEnemyName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    XRD777_API FDatEnemyName();
};

