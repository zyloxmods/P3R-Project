#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "BtlImputDelegateDelegate.h"
#include "BtlImputTrigDelegate.h"
#include "BtlInputKey.h"
#include "EBtlInputKeyboardEnum.h"
#include "BtlInputComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlInputComponent : public UAppActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlInputKey InputKey;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputDelegate InputDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigRU;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigOK;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigRL;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigCANCEL;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigLU;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigLR;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigLL;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigLD;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigR1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigL1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigR2;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigL2;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigR3;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigL3;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigOPTION;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlImputTrig TrigTOUCH;
    
    UBtlInputComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveTouchCollCallback();
    
    UFUNCTION(BlueprintCallable)
    void CallInputTrigKeyboard(EBtlInputKeyboardEnum Key);
    
    UFUNCTION(BlueprintCallable)
    void BtlInputSetCtrlEnable(bool isEnable);
    
    UFUNCTION(BlueprintCallable)
    static void BtlInputSetComponentEnable(bool isEnable);
    
    UFUNCTION(BlueprintCallable)
    void BtlInputKeyLockClear();
    
    UFUNCTION(BlueprintCallable)
    void BtlInputKeyLock(TArray<EBtlInputKeyboardEnum> lockKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BtlInputCheckCtrlEnable(bool& Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BtlInputCheckComponentEnable(bool& Enable);
    
    UFUNCTION(BlueprintCallable)
    void BtlInputAlwaysEnable(bool isEnable);
    
    UFUNCTION(BlueprintCallable)
    void AddTouchCollCallback();
    
};

