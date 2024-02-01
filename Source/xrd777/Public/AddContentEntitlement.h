#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAddContentEntitlementCategory.h"
#include "AddContentEntitlement.generated.h"

USTRUCT(BlueprintType)
struct FAddContentEntitlement : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAddContentEntitlementCategory Categories[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Items[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PsEntitlementLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MsStoreId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SteamAppId;
    
    XRD777_API FAddContentEntitlement();
};

