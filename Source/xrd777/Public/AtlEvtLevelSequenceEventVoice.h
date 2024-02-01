#pragma once
#include "CoreMinimal.h"
#include "AtlEvtLevelSequenceEventVoice.generated.h"

class USoundAtomCueSheet;

USTRUCT(BlueprintType)
struct FAtlEvtLevelSequenceEventVoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> AtomCueAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BankNum;
    
    XRD777_API FAtlEvtLevelSequenceEventVoice();
};

