#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CampModelControllerMotionItem.h"
#include "CampModelControllerItem.generated.h"

UCLASS(Blueprintable)
class XRD777_API UCampModelControllerItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCampModelControllerMotionItem> AnimItems;
    
    UCampModelControllerItem();
};

