#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveGameHeadder.h"
#include "XRD777SaveGame.generated.h"

UCLASS(Blueprintable)
class XRD777_API UXRD777SaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveGameHeadder SaveDataHeadder;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SaveDataArea[917888];
    
    UXRD777SaveGame();
};

