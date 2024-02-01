#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GWSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class XRD777_API UGWSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeterminedByCross;
    
    UGWSettings();
};

