#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "UIVelvetRoom.generated.h"

class UUICombine;
class UUICompleteBook;
class UUICompleteBookRegist;
class UUIVelvetRoomOwner;

UCLASS(Blueprintable)
class XRD777_API AUIVelvetRoom : public AUIBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICombine* m_pUICombine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICompleteBook* m_pUICompleteBook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICompleteBookRegist* m_pUICompleteBookRegist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIVelvetRoomOwner* m_pOwner;
    
    AUIVelvetRoom();
private:
    UFUNCTION(BlueprintCallable)
    void StreamLevelCountDecrement();
    
};

