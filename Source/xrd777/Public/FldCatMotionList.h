#pragma once
#include "CoreMinimal.h"
#include "EFldAnimalMotion_CAT.h"
#include "FldCatMotionList.generated.h"

USTRUCT(BlueprintType)
struct FFldCatMotionList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFldAnimalMotion_CAT> mList;
    
    XRD777_API FFldCatMotionList();
};

