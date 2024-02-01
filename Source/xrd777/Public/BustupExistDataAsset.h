#pragma once
#include "CoreMinimal.h"
#include "AppMultiDataAsset.h"
#include "BustupFace.h"
#include "BustupExistDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBustupExistDataAsset : public UAppMultiDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBustupFace> Data;
    
    UBustupExistDataAsset();
};

