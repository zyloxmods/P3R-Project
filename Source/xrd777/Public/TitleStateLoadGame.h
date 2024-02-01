#pragma once
#include "CoreMinimal.h"
#include "TitleStateBase.h"
#include "TitleStateLoadGame.generated.h"

class AUISaveLoad;

UCLASS(Blueprintable)
class XRD777_API UTitleStateLoadGame : public UTitleStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUISaveLoad* SaveLoadUI;
    
public:
    UTitleStateLoadGame();
};

