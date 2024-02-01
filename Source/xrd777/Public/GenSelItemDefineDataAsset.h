#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "GenSelItemDefine.h"
#include "GenSelItemDefineDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UGenSelItemDefineDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenSelItemDefine> Data;
    
    UGenSelItemDefineDataAsset();
};

