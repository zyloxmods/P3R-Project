#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugMenuBPI_Actor.generated.h"

class UDebugMenuBase;

UCLASS(Blueprintable)
class DEBUGMENUPLUGIN_API ADebugMenuBPI_Actor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuBase* _DebugMenuBase;
    
    ADebugMenuBPI_Actor();
};

