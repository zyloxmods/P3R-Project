#pragma once
#include "CoreMinimal.h"
#include "TitleStateBase.h"
#include "TitleStateOP.generated.h"

class AMoviePlayActor;

UCLASS(Blueprintable)
class XRD777_API UTitleStateOP : public UTitleStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMoviePlayActor* MovieActor;
    
public:
    UTitleStateOP();
};

