#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RaytraceActorData.generated.h"

USTRUCT(BlueprintType)
struct FRaytraceActorData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString actorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> materialNames;
    
    XRD777_API FRaytraceActorData();
};

