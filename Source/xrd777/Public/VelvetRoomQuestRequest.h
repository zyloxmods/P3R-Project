#pragma once
#include "CoreMinimal.h"
#include "EQuestRequestOption.h"
#include "EQuestRequestPersonaType.h"
#include "EQuestRequestType.h"
#include "VelvetRoomQuestRequest.generated.h"

USTRUCT(BlueprintType)
struct FVelvetRoomQuestRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestRequestType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestRequestPersonaType PersonaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestRequestOption OPTION;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Penalty;
    
    XRD777_API FVelvetRoomQuestRequest();
};

