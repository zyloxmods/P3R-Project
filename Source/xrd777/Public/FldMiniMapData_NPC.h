#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFldMiniMapType_NPC.h"
#include "FldMiniMapData_NPC.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct XRD777_API FFldMiniMapData_NPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldMiniMapType_NPC mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mCharactor;
    
    FFldMiniMapData_NPC();
};

