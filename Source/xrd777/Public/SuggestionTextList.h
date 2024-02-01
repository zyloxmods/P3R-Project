#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SuggestionTextList.generated.h"

USTRUCT(BlueprintType)
struct FSuggestionTextList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    XRD777_API FSuggestionTextList();
};

