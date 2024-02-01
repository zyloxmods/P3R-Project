#pragma once
#include "CoreMinimal.h"
#include "FldDungeonComponentBase.h"
#include "FldPartnerHolder.h"
#include "FldDungeonPartnerController.generated.h"

class AFldDungeonLayoutStartActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldDungeonPartnerController : public UFldDungeonComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldPartnerHolder> m_Partners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldDungeonLayoutStartActor*> m_StartList;
    
public:
    UFldDungeonPartnerController();
};

