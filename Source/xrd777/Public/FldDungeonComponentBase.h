#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "FldDungeonComponentBase.generated.h"

class AFldDungeonScriptActor;

UCLASS(Blueprintable, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldDungeonComponentBase : public UAppActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonScriptActor*> m_ScrHandleList01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonScriptActor*> m_ScrHandleList02;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
public:
    UFldDungeonComponentBase();
};

