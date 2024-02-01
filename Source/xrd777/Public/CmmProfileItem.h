#pragma once
#include "CoreMinimal.h"
#include "ECmmProfileMsgType.h"
#include "CmmProfileItem.generated.h"

USTRUCT(BlueprintType)
struct FCmmProfileItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 PCID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DisappearID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NameMsgNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECmmProfileMsgType, int32> ProfileMsgNo;
    
    XRD777_API FCmmProfileItem();
};

