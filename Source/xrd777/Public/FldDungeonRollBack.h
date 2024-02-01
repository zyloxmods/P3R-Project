#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "FldDungeonRollBack.generated.h"

class UAddContent;

UCLASS(Blueprintable)
class XRD777_API AFldDungeonRollBack : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAddContent* m_pAddContentCheck;
    
public:
    AFldDungeonRollBack();
};

