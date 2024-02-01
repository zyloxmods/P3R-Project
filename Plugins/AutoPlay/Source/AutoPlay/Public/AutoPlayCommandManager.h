#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "APCommandReserve.h"
#include "AutoPlayCommandManager.generated.h"

UCLASS(Blueprintable)
class AUTOPLAY_API UAutoPlayCommandManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAPCommandReserve> CommandQueue_;
    
public:
    UAutoPlayCommandManager();
};

