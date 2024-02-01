#pragma once
#include "CoreMinimal.h"
#include "CldBindingEventActorTag.generated.h"

USTRUCT(BlueprintType)
struct FCldBindingEventActorTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mAssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mBindingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mNpcSkeltonID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 mCostumeID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 mAnimSlotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsBag;
    
    XRD777_API FCldBindingEventActorTag();
};

