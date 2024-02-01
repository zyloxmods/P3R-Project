#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FileNameListRecord.generated.h"

USTRUCT(BlueprintType)
struct FFileNameListRecord : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 chunk;
    
    XRD777_API FFileNameListRecord();
};

