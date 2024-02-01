#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "BtlAiScriptWatcher.generated.h"

class ABtlAI;
class ABtlActor;
class UBtlActionManagerComponent;

UCLASS(Blueprintable)
class XRD777_API ABtlAiScriptWatcher : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlAI* AI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBtlActionManagerComponent* ActionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlActor* Character;
    
    ABtlAiScriptWatcher();
};

