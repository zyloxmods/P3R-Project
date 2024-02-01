#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CmpSkillDraw.generated.h"

class ACmpMainActor;

UCLASS(Blueprintable)
class XRD777_API UCmpSkillDraw : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pMainActor;
    
public:
    UCmpSkillDraw();
};

