#pragma once
#include "CoreMinimal.h"
#include "CldBindingData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCldBindingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mBindingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mNpcSkeltonID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 mCostumeID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 mAnimSlotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* mBpClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mActor;
    
    XRD777_API FCldBindingData();
};

