#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "SummerFestivalEventData.h"
#include "SummerFestivalEventDataAsset.generated.h"

UCLASS(Blueprintable)
class USummerFestivalEventDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSummerFestivalEventData> Table;
    
    USummerFestivalEventDataAsset();
};

