#pragma once
#include "CoreMinimal.h"
#include "EQuestListItemState.h"
#include "UIDrawBaseActor.h"
#include "UIVelvetRoomRequestDraw.generated.h"

UCLASS(Blueprintable)
class XRD777_API AUIVelvetRoomRequestDraw : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
    AUIVelvetRoomRequestDraw();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenQuestMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenQuestDetails();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSortType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuestListItemState GetQuestState(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetQuestRank();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetQuestNewFlag(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuestListMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuestID(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorListTopIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorCurrentIndex();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DrawQuestReward(float X, float Y, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void DrawQuestItem(float X, float Y, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void DrawQuestHelp(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void DrawQuestDetails(float X, float Y);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseQuestMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseQuestDetails();
    
};

