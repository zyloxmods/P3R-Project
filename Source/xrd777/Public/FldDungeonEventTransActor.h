#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "EDungeonEventTransOriginType.h"
#include "FldDungeonEventTransActor.generated.h"

class AFldDungeonLayoutStartActor;

UCLASS(Blueprintable)
class XRD777_API AFldDungeonEventTransActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonEventTransOriginType TransOriginType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WithinTypeID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonLayoutStartActor*> m_LayoutPos;
    
public:
    AFldDungeonEventTransActor();
    UFUNCTION(BlueprintCallable)
    void SetPartyTransform();
    
};

