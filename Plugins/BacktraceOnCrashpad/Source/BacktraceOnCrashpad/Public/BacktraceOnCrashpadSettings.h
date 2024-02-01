#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "BacktraceOnCrashpadSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Plugins)
class BACKTRACEONCRASHPAD_API UBacktraceOnCrashpadSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString BacktraceURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString BacktraceToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString CrashpadDatabasePath;
    
    UBacktraceOnCrashpadSettings();
};

