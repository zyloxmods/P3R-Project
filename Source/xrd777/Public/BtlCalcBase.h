#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "EBtlCalcParamType.h"
#include "EBtlGameDifficulty.h"
#include "BtlCalcBase.generated.h"

UCLASS(Blueprintable)
class XRD777_API ABtlCalcBase : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CriticalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CriticalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriticalPlayerDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriticalEnemyDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockdownRateAttackingDownCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccuracyMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccuracyMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BadStatusAccuracyMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BadStatusAccuracyMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EscapeSuccessRateMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EscapeSuccessRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EscapeTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DyingHPRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsChargePowerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagicChargePowerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsChargePowerRateTheurgia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagicChargePowerRateTheurgia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BadStatusRecoveryPlayerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BadStatusRecoveryEnemyRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuardProtectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRatioToDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SupportTurnMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharmBoosterDamageRatioToCharm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkillDamageBonusToDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BadHitRatioBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoMikiri;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoShinMikiri;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoHighBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoMegaBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoBoosterMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoAlloutBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoBadStatusBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoBadStatusSwoonBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoCounterOccur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoHeavyCounterOccur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoHyperCounterOccur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoGrowthLowExpRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoGrowthMiddleExpRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoGrowthhightExpRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoHPRecoveryRatio_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoHPRecoveryRatio_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoHPRecoveryRatio_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSPRecoveryValue_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSPRecoveryValue_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSPRecoveryValue_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSPRecoveryValue_AddEffect_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSPRecoveryValue_AddEffect_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoAddExp_Ration_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoAddExp_Ration_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTakeoverBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTakeoverHighBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSingleTargetBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoMultiTargetBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoAddCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoAddCriticalHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTGRWeakBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTGRWeakHighBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTGRCriticalBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTGRCriticalHighBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoTGRAddCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoTGRAddCriticalHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTGRPowerBoostAmplify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTGRPowerBoostHighAmplify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTGRAddCriticalToBadStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTGRAddCriticalHighToBadStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTGRWeakProtecter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTGRWeakHighProtecter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTGRPhisicsBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTGRPhisicsHighBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTGRSPHeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTGRSPHighHeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TGRGaugeLowHPRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TGRGaugeLowSPRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TGRExpBonusRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TGRGaugeBonusRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TGRGaugeBonusHighRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTurnSWOON;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTurnCHARM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTurnCHARM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTurnUPSET;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTurnUPSET;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTurnPANIC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTurnPANIC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTurnFEAR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTurnFEAR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTurnANGER;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTurnANGER;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTurnFREEZE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTurnFREEZE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTurnSHOCK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTurnSHOCK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultTurnOVERLIMIT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultTurnOVERHEAT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddCriticalByUPSET;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddCriticalByPANIC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddCriticalByFEAR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddCriticalBySHOCK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddCriticalByFREEZE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddCriticalBySWOON;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoisonMaxDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoisonDamageRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyRatioByANGER;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackSwoonDownRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhysicalSkillSwoonDownRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MagicalSkillSwoonDownRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TheurgiaSkillSwoonDownRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DoNothingRatioByFEAR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MajorArcanaRationByStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MajorArcanaRationByRare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MustAppearMajorEncount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShufflePersonaBonusExpRation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MajorArcanaBasicRation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinorArcanaBasicRation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PersonaArcanaBasicRation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShuffleTimeAlloutBooster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShuffleTimeChariotIncreaseHeroHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShuffleTimeHermitIncreaseHeroSP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShuffleTimeFortuneIncreasePartyHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShuffleTimeStrengthIncreasePartySp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBattleNumNotContinualPlayingFukaCutin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OneMoreCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OneMoreCountEnemy;
    
    ABtlCalcBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float RecoveryRatioFromUPSET() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float RecoveryRatioFromPANIC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float RecoveryRatioFromFEAR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float RecoveryRatioFromCHARM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float RecoveryRatioFromANGER() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetSpeedSupportRatio(bool isPlayer, int32 Point) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetShuffleTimeOccurPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetShuffleTimeMajorPercent(int32 EncountNumFromLastMajor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetSaleMerchMoneyRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPlayerWeakDamageRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPlayerCriticalDamageRate();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParam(EBtlCalcParamType Type, int32 Param) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetNewmoonSkillPowerRatio(int32 MoonAge) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetMoneyRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetMagicBonusRecovery(int32 MagicAttacker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetMagicBonusDamage(int32 MagicAttacker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetLevelExpRatio(int32 LevelDifference) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetLevelDamageRatio(int32 LevelAttacker, int32 LevelTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetLevelDamageBossRatio(int32 LevelAttacker, int32 LevelTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetLevelAccuracyRatio(int32 LevelAttacker, int32 LevelTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetFullmoonSkillPowerRatio(int32 MoonAge) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetExpRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetEnemyWeakDamageRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetEnemyCriticalDamageRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetDownAgilityForEnemy();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlGameDifficulty GetDifficulty() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetDefenseSupportRatio(bool isPlayer, int32 Point) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetDamageRateToPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetDamageRateToEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetAttackSupportRatio(bool isPlayer, int32 Point) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetAllOutAttackSwoonRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float DamageRatioByUPSET() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float DamageRatioByOVERLIMIT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float DamageRatioByOVERHEAT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float DamageRatioByANGER() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTargetIsEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSkillIsAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAttackerIsEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcTheurgiaSkillDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcRushDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcPhysicalDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcMagicDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcHealRecovery();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcExpPersonaLevelUp(float Level, float DefaultLevel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcEscapeRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcDownRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcCriticalHitRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcBadStatusRecoveryRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcBadStatusHitRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcAllOutAttackDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcAccuracyRate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float AttackRatioByUPSET() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float AttackRatioByOVERLIMIT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float AttackRatioByANGER() const;
    
};

