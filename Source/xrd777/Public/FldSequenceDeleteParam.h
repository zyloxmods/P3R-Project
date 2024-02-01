#pragma once
#include "CoreMinimal.h"
#include "FldSequenceDeleteParam.generated.h"

USTRUCT(BlueprintType)
struct FFldSequenceDeleteParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mNextSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> mLoadSubLevelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> mHideSubLevelList;
    
    XRD777_API FFldSequenceDeleteParam();
};

