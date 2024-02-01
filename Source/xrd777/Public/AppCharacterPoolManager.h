#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AppCharacterPoolManager.generated.h"

class UAppCharLoader;

UCLASS(Blueprintable)
class XRD777_API UAppCharacterPoolManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppCharLoader* Loader;
    
public:
    UAppCharacterPoolManager();
};

