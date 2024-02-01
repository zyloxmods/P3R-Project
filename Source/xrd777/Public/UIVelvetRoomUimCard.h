#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIVelvetRoomUimCard.generated.h"

class ACameraActor;
class UWorld;

UCLASS(Blueprintable)
class XRD777_API UUIVelvetRoomUimCard : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* pWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* pCamera;
    
public:
    UUIVelvetRoomUimCard();
};

