#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SummerFestivalEventRow.generated.h"

USTRUCT(BlueprintType)
struct FSummerFestivalEventRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MailID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 major;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Minor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OnFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OffFlag;
    
    XRD777_API FSummerFestivalEventRow();
};

