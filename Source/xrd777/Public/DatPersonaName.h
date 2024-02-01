#pragma once
#include "CoreMinimal.h"
#include "DatPersonaName.generated.h"

USTRUCT(BlueprintType)
struct FDatPersonaName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    XRD777_API FDatPersonaName();
};

