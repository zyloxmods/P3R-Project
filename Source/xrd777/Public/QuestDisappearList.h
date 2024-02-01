#pragma once
#include "CoreMinimal.h"
#include "UIScene.h"
#include "QuestDisappearList.generated.h"

class AUICmpQuest;

UCLASS(Blueprintable)
class XRD777_API UQuestDisappearList : public UUIScene {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICmpQuest* Context_;
    
public:
    UQuestDisappearList();
};

