#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BmdAsset.generated.h"

UCLASS(Blueprintable)
class BMDASSETPLUGIN_API UBmdAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int8> mBuf;
    
    UBmdAsset();
};

