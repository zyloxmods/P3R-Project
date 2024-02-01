#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "NowatariTestMenu.generated.h"

class AActor;
class UBmdAsset;
class UDebugMenu;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API ANowatariTestMenu : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* BmdAsset_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenu* DebugMenu_;
    
    ANowatariTestMenu();
};

