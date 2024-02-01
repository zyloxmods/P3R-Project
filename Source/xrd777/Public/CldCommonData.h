#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CldCommonData.generated.h"

class ACldCmnDataActor;
class UCldDateDataAsset;

UCLASS(Blueprintable)
class XRD777_API UCldCommonData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACldCmnDataActor* mActor_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCldDateDataAsset* mDatesData_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* mBpClass_[2];
    
    UCldCommonData();
};

