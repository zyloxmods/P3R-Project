#pragma once
#include "CoreMinimal.h"
#include "AppMultiDataAsset.h"
#include "TutorialTables.h"
#include "TutorialTableDataAsset.generated.h"

UCLASS(Blueprintable)
class UTutorialTableDataAsset : public UAppMultiDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialTables> Table;
    
    UTutorialTableDataAsset();
};

