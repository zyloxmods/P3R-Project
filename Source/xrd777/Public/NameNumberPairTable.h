#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NameNumberPairTable.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FNameNumberPairTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Number;
    
    FNameNumberPairTable();
};

