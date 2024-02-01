#pragma once
#include "CoreMinimal.h"
#include "EAppCharShoesID.generated.h"

UENUM(BlueprintType)
enum class EAppCharShoesID : uint8 {
    None,
    Shoes = 0x32,
    Slippers,
    Socks,
};

