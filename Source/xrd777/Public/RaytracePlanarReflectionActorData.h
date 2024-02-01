#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RaytracePlanarReflectionActorData.generated.h"

USTRUCT(BlueprintType)
struct FRaytracePlanarReflectionActorData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString actorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 percentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool highendOnly;
    
    XRD777_API FRaytracePlanarReflectionActorData();
};

