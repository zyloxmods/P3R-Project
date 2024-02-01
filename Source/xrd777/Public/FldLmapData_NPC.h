#pragma once
#include "CoreMinimal.h"
#include "EFldLmapData_NpcType.h"
#include "FldLmapData_NPC.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FFldLmapData_NPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldLmapData_NpcType mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mName;
    
    FFldLmapData_NPC();
};

