#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WeaponShopDrawCommon.generated.h"

class AUICloudCursorDraw;

UCLASS(Blueprintable)
class UWeaponShopDrawCommon : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICloudCursorDraw* _pCloudCursor;
    
    UWeaponShopDrawCommon();
};

