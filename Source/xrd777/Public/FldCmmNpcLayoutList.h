#pragma once
#include "CoreMinimal.h"
#include "FldCmmNpcLayoutData.h"
#include "FldCmmNpcLayoutList.generated.h"

USTRUCT(BlueprintType)
struct FFldCmmNpcLayoutList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mFieldMajor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mFieldMinor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mTimeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mKeyfreeEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldCmmNpcLayoutData> mDataList;
    
    XRD777_API FFldCmmNpcLayoutList();
};

