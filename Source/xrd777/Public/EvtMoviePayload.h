#pragma once
#include "CoreMinimal.h"
#include "EEvtMovieOperation.h"
#include "EvtMoviePayload.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FEvtMoviePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEvtMovieOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeekFrame;
    
    FEvtMoviePayload();
};

