#pragma once
#include "CoreMinimal.h"
#include "MoviesEventData.generated.h"

USTRUCT(BlueprintType)
struct FMoviesEventData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Month;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArcanaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MailID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 major;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Minor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 CommunityRankMin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 CommunityRankMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OffFlag;
    
    XRD777_API FMoviesEventData();
};

