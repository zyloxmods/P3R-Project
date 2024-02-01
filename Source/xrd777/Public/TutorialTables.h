#pragma once
#include "CoreMinimal.h"
#include "TutorialTableData.h"
#include "TutorialTables.generated.h"

USTRUCT(BlueprintType)
struct FTutorialTables {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialTableData> Datas;
    
    XRD777_API FTutorialTables();
};

