#pragma once
#include "CoreMinimal.h"
#include "PersonaConfigItem.generated.h"

USTRUCT(BlueprintType)
struct FPersonaConfigItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BirthMsgNo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ToneType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 VoicePack;
    
    XRD777_API FPersonaConfigItem();
};

