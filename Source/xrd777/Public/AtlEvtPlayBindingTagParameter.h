#pragma once
#include "CoreMinimal.h"
#include "AtlEvtPlayBindingTagParameter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAtlEvtPlayBindingTagParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* BindingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BindingTag;
    
    XRD777_API FAtlEvtPlayBindingTagParameter();
};

