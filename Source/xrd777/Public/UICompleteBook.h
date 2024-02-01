#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UICompleteBook.generated.h"

class UUIVelvetRoomOwner;

UCLASS(Blueprintable)
class XRD777_API UUICompleteBook : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIVelvetRoomOwner* m_pOwner;
    
public:
    UUICompleteBook();
};

