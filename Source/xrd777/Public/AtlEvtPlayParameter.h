#pragma once
#include "CoreMinimal.h"
#include "AtlEvtPlayBindingTagParameter.h"
#include "FieldEventInfo.h"
#include "AtlEvtPlayParameter.generated.h"

USTRUCT(BlueprintType)
struct FAtlEvtPlayParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventAssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlEvtPlayBindingTagParameter> BindingTagActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTimeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldEventInfo FieldEventInfo;
    
    XRD777_API FAtlEvtPlayParameter();
};

