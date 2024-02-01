#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "SeqBpFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class XRD777_API USeqBpFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USeqBpFuncLib();
    UFUNCTION(BlueprintCallable)
    static void StartGameSequence();
    
    UFUNCTION(BlueprintCallable)
    static void GoToTartarus();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CallWeaponShop(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void CallTitle();
    
    UFUNCTION(BlueprintCallable)
    static void CallKeyfreeEvent(int32 FieldMajor, int32 FieldMinor, int32 KeyfreeEventID, int32 PlayerStartID);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CallItemShop(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void CallField(int32 FieldMajor, int32 FieldMinor, int32 PlayerStartID);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CallEventCmm(int32 EventMajor, int32 EventMinor, const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CallEvent(int32 EventMajor, int32 EventMinor, const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void CallCalendar();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CallBattle(int32 EncountID, const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
};

