#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BtlSoundBPFuncLib.generated.h"

class ABtlActor;

UCLASS(Blueprintable)
class XRD777_API UBtlSoundBPFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBtlSoundBPFuncLib();
    UFUNCTION(BlueprintCallable)
    static void BtlSEPlaySHIFT();
    
    UFUNCTION(BlueprintCallable)
    static void BtlSEPlayPANELOPEN();
    
    UFUNCTION(BlueprintCallable)
    static void BtlSEPlayPAGE();
    
    UFUNCTION(BlueprintCallable)
    static void BtlSEPlayERROR();
    
    UFUNCTION(BlueprintCallable)
    static void BtlSEPlayDOWN();
    
    UFUNCTION(BlueprintCallable)
    static void BtlSEPlayDECIDE();
    
    UFUNCTION(BlueprintCallable)
    static void BtlSEPlayCURSOR();
    
    UFUNCTION(BlueprintCallable)
    static void BtlSEPlayCRITICAL();
    
    UFUNCTION(BlueprintCallable)
    static void BtlSEPlayCANCEL();
    
    UFUNCTION(BlueprintCallable)
    static void BtlSEPlay(int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    static void BtlPCVoicePlayNotLipsync(ABtlActor* Actor, int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    static void BtlPCVoicePlay_ShiftSelect(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void BtlPCVoicePlay_HeroUI(ABtlActor* Actor, int32 Type);
    
    UFUNCTION(BlueprintCallable)
    static void BtlPCVoicePlay_Command(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void BtlPCVoicePlay(ABtlActor* Actor, int32 CueId);
    
};

