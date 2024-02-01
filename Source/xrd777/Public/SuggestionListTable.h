#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "SuggestionList.h"
#include "SuggestionListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API USuggestionListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSuggestionList> Data;
    
    USuggestionListTable();
};

