#pragma once
#include "CoreMinimal.h"
#include "FldMiniMapData_NPC.h"
#include "FldMiniMapData_Target.h"
#include "FldMiniMapData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FFldMiniMapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldMiniMapData_NPC> mNpcList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldMiniMapData_Target> mTargetList;
    
    FFldMiniMapData();
};

