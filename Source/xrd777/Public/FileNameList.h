#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FileNameList.generated.h"

USTRUCT(BlueprintType)
struct FFileNameList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 chunk;
    
    XRD777_API FFileNameList();
};

