#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FldPartnerStartPointComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldPartnerStartPointComp : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UFldPartnerStartPointComp();
};

