#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GenSelItemDefineTable.generated.h"

USTRUCT(BlueprintType)
struct FGenSelItemDefineTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefineValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CommentText;
    
    XRD777_API FGenSelItemDefineTable();
};

