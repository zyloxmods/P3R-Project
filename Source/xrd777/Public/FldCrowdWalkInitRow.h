#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FldCrowdWalkInitActorData.h"
#include "FldCrowdWalkInitRow.generated.h"

USTRUCT(BlueprintType)
struct FFldCrowdWalkInitRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FieldMajorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FieldMinorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeasonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldCrowdWalkInitActorData> ActorArray;
    
    XRD777_API FFldCrowdWalkInitRow();
};

