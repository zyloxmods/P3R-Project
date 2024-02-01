#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FldEnemyFootprint.generated.h"

USTRUCT(BlueprintType)
struct FFldEnemyFootprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BeforLocation;
    
    XRD777_API FFldEnemyFootprint();
};

