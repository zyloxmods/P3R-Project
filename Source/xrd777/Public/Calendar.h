#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECldSceneChangeType.h"
#include "ECldTimeZone.h"
#include "Calendar.generated.h"

class ACldBindingEventActor;

UCLASS(Blueprintable)
class XRD777_API UCalendar : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACldBindingEventActor* mEventActor_;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mChangeFlag_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECldSceneChangeType mChangeType_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECldSceneChangeType mChangeSetted_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mChangePrevDay_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECldTimeZone mChangePrevTimeZone_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mChangeNextDay_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECldTimeZone mChangeNextTimeZone_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cursorDay;
    
    UCalendar();
};

