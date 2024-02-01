#pragma once
#include "CoreMinimal.h"
#include "ShopLineUpListBase.h"
#include "WeaponShopLineUpList.generated.h"

USTRUCT(BlueprintType)
struct FWeaponShopLineUpList : public FShopLineUpListBase {
    GENERATED_BODY()
public:
    XRD777_API FWeaponShopLineUpList();
};

