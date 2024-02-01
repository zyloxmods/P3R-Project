#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KimuraDebugMenu.generated.h"

class UDebugMenu;

UCLASS(Blueprintable)
class XRD777_API AKimuraDebugMenu : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenu* Menu;
    
public:
    AKimuraDebugMenu();
};

