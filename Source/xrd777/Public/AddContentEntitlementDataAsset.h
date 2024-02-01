#pragma once
#include "CoreMinimal.h"
#include "AddContentEntitlement.h"
#include "AppDataAsset.h"
#include "AddContentEntitlementDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UAddContentEntitlementDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAddContentEntitlement> Data;
    
    UAddContentEntitlementDataAsset();
};

