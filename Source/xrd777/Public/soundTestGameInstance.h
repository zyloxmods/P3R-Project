#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "soundTestGameInstance.generated.h"

class UPakFileManagerControl;
class UPlayAdxControl;

UCLASS(Blueprintable, NonTransient)
class XRD777_API UsoundTestGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayAdxControl* m_PlayAdxControl;
    
public:
    UsoundTestGameInstance();
    UFUNCTION(BlueprintCallable)
    UPlayAdxControl* GetPlayAdxControl();
    
    UFUNCTION(BlueprintCallable)
    UPakFileManagerControl* GetFileManagerControl();
    
};

