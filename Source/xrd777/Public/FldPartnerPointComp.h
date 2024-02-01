#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FldPartnerPointComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldPartnerPointComp : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsePartyId;
    
public:
    UFldPartnerPointComp();
};

