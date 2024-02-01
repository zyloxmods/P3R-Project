#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "ArbeitInfo.h"
#include "ArbeitInfoDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UArbeitInfoDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArbeitInfo> Data;
    
    UArbeitInfoDataAsset();
};

