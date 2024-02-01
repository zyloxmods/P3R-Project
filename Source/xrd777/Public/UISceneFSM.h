#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UISceneFSM.generated.h"

class UUIScene;

UCLASS(Blueprintable)
class XRD777_API UUISceneFSM : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUIScene*> SceneStack_;
    
public:
    UUISceneFSM();
};

