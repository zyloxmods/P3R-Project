#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECldDayDispState.h"
#include "ECldSeason.h"
#include "ECldTimeZone.h"
#include "CldBpFuncLib.generated.h"

UCLASS(Blueprintable)
class XRD777_API UCldBpFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCldBpFuncLib();
    UFUNCTION(BlueprintCallable)
    static void SetNowTotalDay(int32 TotalDay);
    
    UFUNCTION(BlueprintCallable)
    static void SetNowTimeZone(ECldTimeZone TimeZone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTotalDayFromSeason(ECldSeason Season);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNowYoubi();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetNowYasumi();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNowTotalToDayMon(int32& Month, int32& Day);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNowTotalDay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECldTimeZone GetNowTimeZone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNowTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECldSeason GetNowSeason();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNowMoonAge();
    
    UFUNCTION(BlueprintCallable)
    static void CldSetDrawDayDispIm(ECldDayDispState flag);
    
    UFUNCTION(BlueprintCallable)
    static void CldSetDrawDayDisp(ECldDayDispState flag);
    
    UFUNCTION(BlueprintCallable)
    static ECldDayDispState CldGetDayDispState();
    
    UFUNCTION(BlueprintCallable)
    static bool CldCheckDayDispInOut();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckWinterCloth();
    
};

