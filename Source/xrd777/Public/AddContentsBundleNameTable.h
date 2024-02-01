#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AddContentsBundleNameTable.generated.h"

USTRUCT(BlueprintType)
struct FAddContentsBundleNameTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    XRD777_API FAddContentsBundleNameTable();
};

