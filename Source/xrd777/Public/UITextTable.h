#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UITextTable.generated.h"

USTRUCT(BlueprintType)
struct FUITextTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KewWord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    XRD777_API FUITextTable();
};

