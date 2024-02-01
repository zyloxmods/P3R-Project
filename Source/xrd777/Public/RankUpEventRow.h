#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RankUpEventRow.generated.h"

USTRUCT(BlueprintType)
struct FRankUpEventRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Rank;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Point;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 major;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Minor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Brain;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 charm;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Courage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Flag0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Flag1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Flag2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Flag3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Comment;
    
    XRD777_API FRankUpEventRow();
};

