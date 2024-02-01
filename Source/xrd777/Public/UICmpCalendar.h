#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIBaseActor.h"
#include "UICmpCalendar.generated.h"

class AUICmpCalendar;
class UCmpCldCursor;
class UUICmpCalendarDraw;

UCLASS(Blueprintable)
class XRD777_API AUICmpCalendar : public AUIBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpCldCursor* DayCursor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICmpCalendarDraw* Drawer_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUICmpCalendar> CalendarBPClass;
    
public:
    AUICmpCalendar();
};

