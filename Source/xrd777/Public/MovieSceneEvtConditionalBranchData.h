#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "EEvtConditionalBranchCompType.h"
#include "EEvtConditionalBranchType.h"
#include "MovieSceneEvtConditionalBranchData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvtConditionalBranchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEvtConditionalBranchType ConditionalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConditionalNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConditionalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEvtConditionalBranchCompType CompareType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID EvtManagerBindingID;
    
    XRD777_API FMovieSceneEvtConditionalBranchData();
};

