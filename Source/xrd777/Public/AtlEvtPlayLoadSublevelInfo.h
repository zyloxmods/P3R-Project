#pragma once
#include "CoreMinimal.h"
#include "EAtlEvtPlayLoadSublevelType.h"
#include "AtlEvtPlayLoadSublevelInfo.generated.h"

USTRUCT(BlueprintType)
struct FAtlEvtPlayLoadSublevelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SublevelPackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlEvtPlayLoadSublevelType SublevelType;
    
    XRD777_API FAtlEvtPlayLoadSublevelInfo();
};

