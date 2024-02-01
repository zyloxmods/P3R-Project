#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "UICmpQuest.generated.h"

class ACmpMainActor;
class UQuestDisappearList;
class UQuestElizRequest;
class UUISceneFSM;

UCLASS(Blueprintable)
class XRD777_API AUICmpQuest : public AUIBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUISceneFSM* SceneFSM_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestElizRequest* ElizRequestScene_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestDisappearList* DisappearListScene_;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pMainActor;
    
public:
    AUICmpQuest();
};

