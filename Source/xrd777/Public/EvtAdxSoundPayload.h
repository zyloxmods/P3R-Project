#pragma once
#include "CoreMinimal.h"
#include "EEvtAdxTrackSoundOperationType.h"
#include "EEvtSoundCategoryType.h"
#include "EvtAdxSoundPayload.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FEvtAdxSoundPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerMajorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerMinorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEvtSoundCategoryType EvtSoundCategoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEvtAdxTrackSoundOperationType EvtAdxSoundOperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopWhileHighSpeed;
    
    FEvtAdxSoundPayload();
};

