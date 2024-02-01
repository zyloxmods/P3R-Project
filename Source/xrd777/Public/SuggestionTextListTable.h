#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "SuggestionTextList.h"
#include "SuggestionTextListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API USuggestionTextListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSuggestionTextList> Data;
    
    USuggestionTextListTable();
};

