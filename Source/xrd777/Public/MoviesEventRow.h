#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MoviesEventRow.generated.h"

USTRUCT(BlueprintType)
struct FMoviesEventRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Month;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArcanaID;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OffFlag;
    
    XRD777_API FMoviesEventRow();
};

