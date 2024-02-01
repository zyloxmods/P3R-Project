#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "MoviesEventData.h"
#include "MoviesEventDataAsset.generated.h"

UCLASS(Blueprintable)
class UMoviesEventDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoviesEventData> Table;
    
    UMoviesEventDataAsset();
};

