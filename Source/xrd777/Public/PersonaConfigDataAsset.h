#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "PersonaConfigItem.h"
#include "PersonaConfigDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UPersonaConfigDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPersonaConfigItem> Data;
    
    UPersonaConfigDataAsset();
};
