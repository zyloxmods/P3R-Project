#pragma once
#include "CoreMinimal.h"
#include "EAppCharBagAnimType.h"
#include "AppCharBagData.generated.h"

class AAppPropsCore;
class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAppCharBagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAppPropsCore> Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SetAnimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAppCharBagAnimType, TSoftObjectPtr<UAnimSequenceBase>> AnimSeqs;
    
    XRD777_API FAppCharBagData();
};

