#pragma once
#include "CoreMinimal.h"
#include "APCommandParam.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct AUTOPLAY_API FAPCommandParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString command_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString filter_name;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStruct* TypeInfo_;
    
public:
    FAPCommandParam();
};

