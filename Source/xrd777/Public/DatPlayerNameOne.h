#pragma once
#include "CoreMinimal.h"
#include "DatPlayerNameOne.generated.h"

USTRUCT(BlueprintType)
struct FDatPlayerNameOne {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mPlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText mName;
    
    XRD777_API FDatPlayerNameOne();
};

