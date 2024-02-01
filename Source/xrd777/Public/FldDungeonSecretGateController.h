#pragma once
#include "CoreMinimal.h"
#include "FldDungeonComponentBase.h"
#include "FldDungeonSecretGateController.generated.h"

class AFldDungeonLayoutActor;
class AFldDungeonObjectActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldDungeonSecretGateController : public UFldDungeonComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldDungeonObjectActor* m_SecretGateActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldDungeonLayoutActor* m_pLayoutSecretGate;
    
public:
    UFldDungeonSecretGateController();
};

