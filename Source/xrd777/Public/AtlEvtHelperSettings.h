#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "AtlEvtHelperSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class XRD777_API UAtlEvtHelperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadSublevelsInAEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSimulateDate;
    
    UAtlEvtHelperSettings();
};

