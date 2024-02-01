#pragma once
#include "CoreMinimal.h"
#include "CmpMenuBase.h"
#include "CmpCalendar.generated.h"

class AUICmpCalendar;
class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API UCmpCalendar : public UCmpMenuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* AssetLoader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICmpCalendar* Actor_;
    
public:
    UCmpCalendar();
};

