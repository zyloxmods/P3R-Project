#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "BattleGuiListDelegateDelegate.h"
#include "BattleGuiListDelegate_OneParamDelegate.h"
#include "EBtlListScreenID.h"
#include "BtlGuiListComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlGuiListComponent : public UAppActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleGuiListDelegate OnCurcorUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleGuiListDelegate_OneParam OnCurcorUpdated;
    
    UBtlGuiListComponent();
    UFUNCTION(BlueprintCallable)
    void Update(int32& CursorIndex, int32& TopIndex, int32& CurrentIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollBarData(float PosY, float ScrollRange, float CenterPosY);
    
    UFUNCTION(BlueprintCallable)
    void SetCursor(int32 CurrentIndex);
    
    UFUNCTION(BlueprintCallable)
    void Init(int32 ItemDtarMin, int32 ItemDtarMax, int32 itemNum, EBtlListScreenID screenID, int32 CursorIdx, int32 ListTopIdx, int32 MoveType);
    
    UFUNCTION(BlueprintCallable)
    void GetCursor(int32& CursorIndex, int32& TopIndex, int32& CurrentIndex);
    
};

