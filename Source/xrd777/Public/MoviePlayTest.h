#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoviePlayTest.generated.h"

class AMoviePlayActor;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API AMoviePlayTest : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMoviePlayActor* MovieActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mMovieInhibitActor;
    
    AMoviePlayTest();
};

