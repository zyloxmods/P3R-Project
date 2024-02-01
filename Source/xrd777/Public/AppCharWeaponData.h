#pragma once
#include "CoreMinimal.h"
#include "AppCharWeaponData.generated.h"

class AAppCharWeaponBase;

USTRUCT(BlueprintType)
struct FAppCharWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAppCharWeaponBase>> BluePrints;
    
    XRD777_API FAppCharWeaponData();
};

