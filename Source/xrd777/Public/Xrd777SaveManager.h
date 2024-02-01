#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Xrd777SaveManager.generated.h"

class UTCSSaveData;
class UXRD777SaveGame;

UCLASS(Blueprintable)
class XRD777_API UXrd777SaveManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTCSSaveData* TCSSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UXRD777SaveGame* NetworkSaveInstance;
    
public:
    UXrd777SaveManager();
};

