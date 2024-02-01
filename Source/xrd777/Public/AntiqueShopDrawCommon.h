#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AntiqueShopDrawCommon.generated.h"

class AUICloudCursorDraw;

UCLASS(Blueprintable)
class UAntiqueShopDrawCommon : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICloudCursorDraw* _pCloudCursor;
    
    UAntiqueShopDrawCommon();
};

