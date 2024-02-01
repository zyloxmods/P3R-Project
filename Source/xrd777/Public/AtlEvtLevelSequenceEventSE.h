#pragma once
#include "CoreMinimal.h"
#include "AtlEvtLevelSequenceEventSE.generated.h"

class USoundAtomCueSheet;

USTRUCT(BlueprintType)
struct FAtlEvtLevelSequenceEventSE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> AtomCueAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BankNum;
    
    XRD777_API FAtlEvtLevelSequenceEventSE();
};

