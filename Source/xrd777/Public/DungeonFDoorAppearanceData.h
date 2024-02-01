#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DungeonFDoorAppearanceData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonFDoorAppearanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MagValue_SAreaDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MagDecValue_Floor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MagIncAddValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PartPos;
    
    XRD777_API FDungeonFDoorAppearanceData();
};

