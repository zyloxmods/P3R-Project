#pragma once
#include "CoreMinimal.h"
#include "AppMultiDataAsset.h"
#include "BustupAnim.h"
#include "BustupMouthAnim.h"
#include "BustupAnimDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBustupAnimDataAsset : public UAppMultiDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBustupAnim> EyeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBustupMouthAnim> MouthAnim;
    
    UBustupAnimDataAsset();
};

