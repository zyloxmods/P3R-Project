#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "APCommandInstance.h"
#include "AutoPlayCommandWorker.generated.h"

UCLASS(Blueprintable)
class AUTOPLAY_API UAutoPlayCommandWorker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAPCommandInstance> CommandQueue_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAPCommandInstance CurrentCommand_;
    
public:
    UAutoPlayCommandWorker();
};

