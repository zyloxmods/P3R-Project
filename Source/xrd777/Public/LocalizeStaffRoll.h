#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "LocalizeStaffRoll.generated.h"

class UAssetLoader;
class UFont;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API ALocalizeStaffRoll : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* m_StaffRollFont;
    
public:
    ALocalizeStaffRoll();
};

