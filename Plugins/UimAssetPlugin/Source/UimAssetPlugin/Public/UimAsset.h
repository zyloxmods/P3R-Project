#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UimData.h"
#include "UimAsset.generated.h"

UCLASS(Blueprintable)
class UIMASSETPLUGIN_API UUimAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUimData UimData;
    
    UUimAsset();
};

