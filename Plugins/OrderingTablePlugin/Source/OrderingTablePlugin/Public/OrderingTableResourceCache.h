#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OrderingTableResourceCache.generated.h"

class UCacheData;

UCLASS(Blueprintable)
class ORDERINGTABLEPLUGIN_API UOrderingTableResourceCache : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCacheData*> _CacheArray;
    
    UOrderingTableResourceCache();
};

