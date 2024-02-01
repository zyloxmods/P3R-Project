#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AppCharLoader.generated.h"

UCLASS(Blueprintable)
class XRD777_API UAppCharLoader : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Assets;
    
    UAppCharLoader();
};

