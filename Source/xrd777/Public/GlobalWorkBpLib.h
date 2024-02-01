#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGWorkOnOffEnum.h"
#include "GlobalWorkBpLib.generated.h"

UCLASS(Blueprintable)
class XRD777_API UGlobalWorkBpLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGlobalWorkBpLib();
    UFUNCTION(BlueprintCallable)
    static void GWorkSetPartyOUT(int32 PCID);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkSetPartyIN(int32 PCID);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkSetMoney(int32 SetMoeny);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkSetCounterValue(int32 CntNo, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkSetCounter(FName CntName, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GWorkIsPartyExists(int32 PCID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GWorkIsJapaneseLanguage();
    
    UFUNCTION(BlueprintCallable)
    static bool GWorkIsFullHpSpAllPartyMember();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GWorkIsEFIGSLanguages();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GWorkIsAsiaLanguages();
    
    UFUNCTION(BlueprintCallable)
    static void GWorkIncCounterValue(int32 CntNo);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkIncCounter(FName CntName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GWorkGetRealTimeDelta();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GWorkGetPartyID(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static int32 GWorkGetMoney();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GWorkGetMaxFPS();
    
    UFUNCTION(BlueprintCallable)
    static int32 GWorkGetCounterValue(int32 CntNo);
    
    UFUNCTION(BlueprintCallable)
    static int32 GWorkGetCounter(FName CntName);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkFullRecoveryAllPartyMember();
    
    UFUNCTION(BlueprintCallable)
    static void GWorkFlagSetValue(int32 Index, EGWorkOnOffEnum& OnOff);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkFlagSet(FName FlagName, EGWorkOnOffEnum& OnOff);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkFlagOnValue(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkFlagOn(FName FlagName);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkFlagOffValue(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkFlagOff(FName FlagName);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkFlagChkValue(int32 Index, EGWorkOnOffEnum& OnOff);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkFlagChk(FName FlagName, EGWorkOnOffEnum& OnOff);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkDecCounterValue(int32 CntNo);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkDecCounter(FName CntName);
    
    UFUNCTION(BlueprintCallable)
    static void GWorkCreateTrophyManagere();
    
    UFUNCTION(BlueprintCallable)
    static void GWorkCreateSignedInDialog();
    
    UFUNCTION(BlueprintCallable)
    static void GWorkCreateMessageDialog();
    
    UFUNCTION(BlueprintCallable)
    static void GWorkCreateLeaderBoardManagere();
    
    UFUNCTION(BlueprintCallable)
    static void GWorkCreateErrorDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GWorkCheckPartyFull();
    
    UFUNCTION(BlueprintCallable)
    static int32 GWorkAddMoney(int32 SetMoeny);
    
};

