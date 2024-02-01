#pragma once
#include "CoreMinimal.h"
#include "ESLDResTypes.h"
#include "SprLayoutEditResources.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSprLayoutEditResources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESLDResTypes Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Resources;
    
    SLDASSETPLUGIN_API FSprLayoutEditResources();
};

