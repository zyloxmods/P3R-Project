#include "BtlCalcBase.h"












float ABtlCalcBase::GetParam(EBtlCalcParamType Type, int32 Param) const {
    return 0.0f;
}














EBtlGameDifficulty ABtlCalcBase::GetDifficulty() const {
    return EBtlGameDifficulty::BTL_SAFETY;
}










bool ABtlCalcBase::CheckTargetIsEnemy() const {
    return false;
}

bool ABtlCalcBase::CheckSkillIsAttack() const {
    return false;
}

bool ABtlCalcBase::CheckAttackerIsEnemy() const {
    return false;
}

















ABtlCalcBase::ABtlCalcBase() {
    this->DamageMax = 0;
    this->CriticalMin = 0;
    this->CriticalMax = 0;
    this->CriticalPlayerDamageRate = 0.00f;
    this->CriticalEnemyDamageRate = 0.00f;
    this->KnockdownRateAttackingDownCharacter = 0.00f;
    this->AccuracyMin = 0;
    this->AccuracyMax = 0;
    this->BadStatusAccuracyMin = 0;
    this->BadStatusAccuracyMax = 0;
    this->EscapeSuccessRateMin = 0;
    this->EscapeSuccessRateMax = 0;
    this->EscapeTurn = 3;
    this->DyingHPRatio = 0;
    this->PhysicsChargePowerRate = 0.00f;
    this->MagicChargePowerRate = 0.00f;
    this->PhysicsChargePowerRateTheurgia = 2.00f;
    this->MagicChargePowerRateTheurgia = 2.00f;
    this->BadStatusRecoveryPlayerRate = 0;
    this->BadStatusRecoveryEnemyRate = 0;
    this->GuardProtectRatio = 0.00f;
    this->DamageRatioToDown = 0.00f;
    this->SupportTurnMax = 0.00f;
    this->CharmBoosterDamageRatioToCharm = 2.00f;
    this->SkillDamageBonusToDown = 0.00f;
    this->BadHitRatioBonus = 0.00f;
    this->AutoMikiri = 0.00f;
    this->AutoShinMikiri = 0.00f;
    this->AutoBooster = 0.00f;
    this->AutoHighBooster = 0.00f;
    this->AutoMegaBooster = 1.75f;
    this->AutoBoosterMax = 0.00f;
    this->AutoAlloutBooster = 1.15f;
    this->AutoBadStatusBooster = 0.00f;
    this->AutoBadStatusSwoonBooster = 1.25f;
    this->AutoCounterOccur = 0;
    this->AutoHeavyCounterOccur = 0;
    this->AutoHyperCounterOccur = 0;
    this->AutoGrowthLowExpRatio = 0.00f;
    this->AutoGrowthMiddleExpRatio = 0.00f;
    this->AutoGrowthhightExpRatio = 0.00f;
    this->AutoHPRecoveryRatio_1 = 2.00f;
    this->AutoHPRecoveryRatio_2 = 4.00f;
    this->AutoHPRecoveryRatio_3 = 6.00f;
    this->AutoSPRecoveryValue_1 = 3.00f;
    this->AutoSPRecoveryValue_2 = 5.00f;
    this->AutoSPRecoveryValue_3 = 7.00f;
    this->AutoSPRecoveryValue_AddEffect_1 = 5.00f;
    this->AutoSPRecoveryValue_AddEffect_2 = 8.00f;
    this->AutoAddExp_Ration_1 = 1.50f;
    this->AutoAddExp_Ration_2 = 1.15f;
    this->AutoTakeoverBooster = 1.10f;
    this->AutoTakeoverHighBooster = 1.20f;
    this->AutoSingleTargetBooster = 1.15f;
    this->AutoMultiTargetBooster = 1.15f;
    this->AutoAddCritical = 3;
    this->AutoAddCriticalHigh = 5;
    this->AutoTGRWeakBooster = 1.00f;
    this->AutoTGRWeakHighBooster = 1.00f;
    this->AutoTGRCriticalBooster = 1.00f;
    this->AutoTGRCriticalHighBooster = 1.00f;
    this->AutoTGRAddCritical = 0;
    this->AutoTGRAddCriticalHigh = 0;
    this->AutoTGRPowerBoostAmplify = 1.00f;
    this->AutoTGRPowerBoostHighAmplify = 1.00f;
    this->AutoTGRAddCriticalToBadStatus = 1.00f;
    this->AutoTGRAddCriticalHighToBadStatus = 1.00f;
    this->AutoTGRWeakProtecter = 1.00f;
    this->AutoTGRWeakHighProtecter = 1.00f;
    this->AutoTGRPhisicsBooster = 1.00f;
    this->AutoTGRPhisicsHighBooster = 1.00f;
    this->AutoTGRSPHeal = 5.00f;
    this->AutoTGRSPHighHeal = 10.00f;
    this->TGRGaugeLowHPRatio = 50.00f;
    this->TGRGaugeLowSPRatio = 50.00f;
    this->TGRExpBonusRatio = 1.20f;
    this->TGRGaugeBonusRatio = 1.30f;
    this->TGRGaugeBonusHighRatio = 1.30f;
    this->MaxTurnSWOON = 2;
    this->MaxTurnCHARM = 4;
    this->MinTurnCHARM = 2;
    this->MaxTurnUPSET = 4;
    this->MinTurnUPSET = 2;
    this->MaxTurnPANIC = 4;
    this->MinTurnPANIC = 2;
    this->MaxTurnFEAR = 4;
    this->MinTurnFEAR = 2;
    this->MaxTurnANGER = 4;
    this->MinTurnANGER = 2;
    this->MaxTurnFREEZE = 2;
    this->MinTurnFREEZE = 2;
    this->MaxTurnSHOCK = 2;
    this->MinTurnSHOCK = 2;
    this->DefaultTurnOVERLIMIT = 3;
    this->DefaultTurnOVERHEAT = 1;
    this->AddCriticalByUPSET = 50;
    this->AddCriticalByPANIC = 40;
    this->AddCriticalByFEAR = 100;
    this->AddCriticalBySHOCK = 100;
    this->AddCriticalByFREEZE = 100;
    this->AddCriticalBySWOON = 40;
    this->PoisonMaxDamage = 999;
    this->PoisonDamageRatio = 0.10f;
    this->AccuracyRatioByANGER = 1.00f;
    this->AttackSwoonDownRatio = 30;
    this->PhysicalSkillSwoonDownRatio = 30;
    this->MagicalSkillSwoonDownRatio = 30;
    this->TheurgiaSkillSwoonDownRatio = 50;
    this->DoNothingRatioByFEAR = 60;
    this->MajorArcanaRationByStrong = 0.00f;
    this->MajorArcanaRationByRare = 0.00f;
    this->MustAppearMajorEncount = 0;
    this->ShufflePersonaBonusExpRation = 0.00f;
    this->MajorArcanaBasicRation = 0.00f;
    this->MinorArcanaBasicRation = 0;
    this->PersonaArcanaBasicRation = 0;
    this->ShuffleTimeAlloutBooster = 1.25f;
    this->ShuffleTimeChariotIncreaseHeroHp = 10;
    this->ShuffleTimeHermitIncreaseHeroSP = 7;
    this->ShuffleTimeFortuneIncreasePartyHp = 8;
    this->ShuffleTimeStrengthIncreasePartySp = 5;
    this->MaxBattleNumNotContinualPlayingFukaCutin = 5;
    this->OneMoreCount = 0;
    this->OneMoreCountEnemy = 0;
}

