#pragma once
#include "CoreMinimal.h"
#include "UIScene.h"
#include "QuestElizRequest.generated.h"

class AUICmpQuest;
class UQuestElizMessage;

UCLASS(Blueprintable)
class XRD777_API UQuestElizRequest : public UUIScene {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICmpQuest* Context_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestElizMessage* ElizMessage_;
    
public:
    UQuestElizRequest();
};

