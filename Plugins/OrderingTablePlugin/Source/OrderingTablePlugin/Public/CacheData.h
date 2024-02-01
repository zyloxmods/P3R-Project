#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CacheData.generated.h"

UCLASS(Blueprintable)
class UCacheData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> _ObjectCache;
    
    UCacheData();
};

