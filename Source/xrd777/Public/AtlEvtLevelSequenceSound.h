#pragma once
#include "CoreMinimal.h"
#include "EPlayerType.h"
#include "AtlEvtLevelSequenceSound.generated.h"

class USoundAtomCueSheet;

USTRUCT(BlueprintType)
struct FAtlEvtLevelSequenceSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> AtomCueAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerMajorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerMinorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerType SoundPlayerType;
    
    XRD777_API FAtlEvtLevelSequenceSound();
};

