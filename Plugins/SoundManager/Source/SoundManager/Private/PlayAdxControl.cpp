#include "PlayAdxControl.h"

void UPlayAdxControl::stopSound_IMD(int32 PlayerMajorID, int32 PlayerMinorID) {
}

void UPlayAdxControl::stopSound(int32 PlayerMajorID, int32 PlayerMinorID) {
}

void UPlayAdxControl::setPlayerAcbBank(int32 PlayerMajorID, int32 PlayerMinorID, EPlayerType Type, int32 bankID) {
}

void UPlayAdxControl::resetLoudness() {
}

void UPlayAdxControl::requestSound(int32 PlayerMajorID, int32 PlayerMinorID, int32 CueId) {
}

int32 UPlayAdxControl::requestLoadAcb(const FString& Filename) {
    return 0;
}

void UPlayAdxControl::requestFreeAcb(int32 bankID) {
}

void UPlayAdxControl::releasePlayerBank(int32 PlayerMajorID, int32 PlayerMinorID) {
}

void UPlayAdxControl::pauseSound(int32 PlayerMajorID, int32 PlayerMinorID, bool flag) {
}

bool UPlayAdxControl::IsLoop(int32 PlayerMajorID, int32 PlayerMinorID) {
    return false;
}

float UPlayAdxControl::GetTime(int32 PlayerMajorID, int32 PlayerMinorID) {
    return 0.0f;
}

float UPlayAdxControl::getShortLoudness() {
    return 0.0f;
}

int32 UPlayAdxControl::getNumCuePlayingCountByName(const FString& Name) {
    return 0;
}

float UPlayAdxControl::getMomentaryLoudness() {
    return 0.0f;
}

FCriLipsMorphTargetBlendAmountAsJapanese UPlayAdxControl::getLipsyncLiveJapanese(int32 majorNum, int32 minorNum) {
    return FCriLipsMorphTargetBlendAmountAsJapanese{};
}

FCriLipsMouthInfo UPlayAdxControl::getLipsyncLiveInfo(int32 majorNum, int32 minorNum) {
    return FCriLipsMouthInfo{};
}

int64 UPlayAdxControl::getLengthSoundBank(int32 bankID, int32 CueId) {
    return 0;
}

int64 UPlayAdxControl::getLengthPlayerBank(int32 majorNum, int32 minorNum, int32 CueId) {
    return 0;
}

float UPlayAdxControl::getIntegratedLoudness() {
    return 0.0f;
}

void UPlayAdxControl::fadeOutSndMng(int32 PlayerMajorID, int32 PlayerMinorID, int32 fadeOutTime) {
}

bool UPlayAdxControl::fadeOutBGMCategorySoundManager(int32 fadeOutTime, float fadeOutVolume) {
    return false;
}

void UPlayAdxControl::fadeInSndMng(int32 PlayerMajorID, int32 PlayerMinorID, int32 fadeInTime) {
}

bool UPlayAdxControl::fadeInBGMCategorySoundmanager(int32 fadeInTime, float fadeInVolume) {
    return false;
}

bool UPlayAdxControl::detachLipsyncLive(int32 majorNum, int32 minorNum) {
    return false;
}

int32 UPlayAdxControl::createPlayerBank(int32 PlayerMajorID, int32 PlayerMinorID, bool isMulti) {
    return 0;
}

bool UPlayAdxControl::checkReadEnd(int32 bankID) {
    return false;
}

int32 UPlayAdxControl::checkReadAcb(const FString& Filename) {
    return 0;
}

bool UPlayAdxControl::checkPlaying(int32 PlayerMajorID, int32 PlayerMinorID) {
    return false;
}

bool UPlayAdxControl::checkPauseSound(int32 PlayerMajorID, int32 PlayerMinorID) {
    return false;
}

bool UPlayAdxControl::attachLipsyncLive(int32 majorNum, int32 minorNum) {
    return false;
}

UPlayAdxControl::UPlayAdxControl() {
    this->mPlayerControlBlock[0] = NULL;
    this->mPlayerControlBlock[1] = NULL;
    this->mPlayerControlBlock[2] = NULL;
    this->mPlayerControlBlock[3] = NULL;
    this->mPlayerControlBlock[4] = NULL;
    this->mPlayerControlBlock[5] = NULL;
    this->mPlayerControlBlock[6] = NULL;
    this->mPlayerControlBlock[7] = NULL;
    this->mPlayerControlBlock[8] = NULL;
    this->mPlayerControlBlock[9] = NULL;
    this->mPlayerControlBlock[10] = NULL;
    this->mPlayerControlBlock[11] = NULL;
    this->mPlayerControlBlock[12] = NULL;
    this->mPlayerControlBlock[13] = NULL;
    this->mPlayerControlBlock[14] = NULL;
    this->mPlayerControlBlock[15] = NULL;
    this->mPlayerControlBlock[16] = NULL;
    this->mPlayerControlBlock[17] = NULL;
    this->mPlayerControlBlock[18] = NULL;
    this->mPlayerControlBlock[19] = NULL;
    this->mPlayerControlBlock[20] = NULL;
    this->mPlayerControlBlock[21] = NULL;
    this->mPlayerControlBlock[22] = NULL;
    this->mPlayerControlBlock[23] = NULL;
    this->mPlayerControlBlock[24] = NULL;
    this->mPlayerControlBlock[25] = NULL;
    this->mPlayerControlBlock[26] = NULL;
    this->mPlayerControlBlock[27] = NULL;
    this->mPlayerControlBlock[28] = NULL;
    this->mPlayerControlBlock[29] = NULL;
    this->mPlayerControlBlock[30] = NULL;
    this->mPlayerControlBlock[31] = NULL;
    this->mPlayerControlBlock[32] = NULL;
    this->mPlayerControlBlock[33] = NULL;
    this->mPlayerControlBlock[34] = NULL;
    this->mPlayerControlBlock[35] = NULL;
    this->mPlayerControlBlock[36] = NULL;
    this->mPlayerControlBlock[37] = NULL;
    this->mPlayerControlBlock[38] = NULL;
    this->mPlayerControlBlock[39] = NULL;
    this->mPlayerControlBlock[40] = NULL;
    this->mPlayerControlBlock[41] = NULL;
    this->mPlayerControlBlock[42] = NULL;
    this->mPlayerControlBlock[43] = NULL;
    this->mPlayerControlBlock[44] = NULL;
    this->mPlayerControlBlock[45] = NULL;
    this->mPlayerControlBlock[46] = NULL;
    this->mPlayerControlBlock[47] = NULL;
    this->mPlayerControlBlock[48] = NULL;
    this->mPlayerControlBlock[49] = NULL;
    this->mPlayerControlBlock[50] = NULL;
    this->mPlayerControlBlock[51] = NULL;
    this->mPlayerControlBlock[52] = NULL;
    this->mPlayerControlBlock[53] = NULL;
    this->mPlayerControlBlock[54] = NULL;
    this->mPlayerControlBlock[55] = NULL;
    this->mPlayerControlBlock[56] = NULL;
    this->mPlayerControlBlock[57] = NULL;
    this->mPlayerControlBlock[58] = NULL;
    this->mPlayerControlBlock[59] = NULL;
    this->mPlayerControlBlock[60] = NULL;
    this->mPlayerControlBlock[61] = NULL;
    this->mPlayerControlBlock[62] = NULL;
    this->mPlayerControlBlock[63] = NULL;
    this->mPlayerControlBlock[64] = NULL;
    this->mPlayerControlBlock[65] = NULL;
    this->mPlayerControlBlock[66] = NULL;
    this->mPlayerControlBlock[67] = NULL;
    this->mPlayerControlBlock[68] = NULL;
    this->mPlayerControlBlock[69] = NULL;
    this->mPlayerControlBlock[70] = NULL;
    this->mPlayerControlBlock[71] = NULL;
    this->mPlayerControlBlock[72] = NULL;
    this->mPlayerControlBlock[73] = NULL;
    this->mPlayerControlBlock[74] = NULL;
    this->mPlayerControlBlock[75] = NULL;
    this->mPlayerControlBlock[76] = NULL;
    this->mPlayerControlBlock[77] = NULL;
    this->mPlayerControlBlock[78] = NULL;
    this->mPlayerControlBlock[79] = NULL;
    this->mPlayerControlBlock[80] = NULL;
    this->mPlayerControlBlock[81] = NULL;
    this->mPlayerControlBlock[82] = NULL;
    this->mPlayerControlBlock[83] = NULL;
    this->mPlayerControlBlock[84] = NULL;
    this->mPlayerControlBlock[85] = NULL;
    this->mPlayerControlBlock[86] = NULL;
    this->mPlayerControlBlock[87] = NULL;
    this->mPlayerControlBlock[88] = NULL;
    this->mPlayerControlBlock[89] = NULL;
    this->mPlayerControlBlock[90] = NULL;
    this->mPlayerControlBlock[91] = NULL;
    this->mPlayerControlBlock[92] = NULL;
    this->mPlayerControlBlock[93] = NULL;
    this->mPlayerControlBlock[94] = NULL;
    this->mPlayerControlBlock[95] = NULL;
    this->mPlayerControlBlock[96] = NULL;
    this->mPlayerControlBlock[97] = NULL;
    this->mPlayerControlBlock[98] = NULL;
    this->mPlayerControlBlock[99] = NULL;
    this->mPlayerControlBlock[100] = NULL;
    this->mPlayerControlBlock[101] = NULL;
    this->mPlayerControlBlock[102] = NULL;
    this->mPlayerControlBlock[103] = NULL;
    this->mPlayerControlBlock[104] = NULL;
    this->mPlayerControlBlock[105] = NULL;
    this->mPlayerControlBlock[106] = NULL;
    this->mPlayerControlBlock[107] = NULL;
    this->mPlayerControlBlock[108] = NULL;
    this->mPlayerControlBlock[109] = NULL;
    this->mPlayerControlBlock[110] = NULL;
    this->mPlayerControlBlock[111] = NULL;
    this->mPlayerControlBlock[112] = NULL;
    this->mPlayerControlBlock[113] = NULL;
    this->mPlayerControlBlock[114] = NULL;
    this->mPlayerControlBlock[115] = NULL;
    this->mPlayerControlBlock[116] = NULL;
    this->mPlayerControlBlock[117] = NULL;
    this->mPlayerControlBlock[118] = NULL;
    this->mPlayerControlBlock[119] = NULL;
    this->mPlayerControlBlock[120] = NULL;
    this->mPlayerControlBlock[121] = NULL;
    this->mPlayerControlBlock[122] = NULL;
    this->mPlayerControlBlock[123] = NULL;
    this->mPlayerControlBlock[124] = NULL;
    this->mPlayerControlBlock[125] = NULL;
    this->mPlayerControlBlock[126] = NULL;
    this->mPlayerControlBlock[127] = NULL;
    this->mPlayerControlBlock[128] = NULL;
    this->mPlayerControlBlock[129] = NULL;
    this->mPlayerControlBlock[130] = NULL;
    this->mPlayerControlBlock[131] = NULL;
    this->mPlayerControlBlock[132] = NULL;
    this->mPlayerControlBlock[133] = NULL;
    this->mPlayerControlBlock[134] = NULL;
    this->mPlayerControlBlock[135] = NULL;
    this->mPlayerControlBlock[136] = NULL;
    this->mPlayerControlBlock[137] = NULL;
    this->mPlayerControlBlock[138] = NULL;
    this->mPlayerControlBlock[139] = NULL;
    this->mPlayerControlBlock[140] = NULL;
    this->mPlayerControlBlock[141] = NULL;
    this->mPlayerControlBlock[142] = NULL;
    this->mPlayerControlBlock[143] = NULL;
    this->mPlayerControlBlock[144] = NULL;
    this->mPlayerControlBlock[145] = NULL;
    this->mPlayerControlBlock[146] = NULL;
    this->mPlayerControlBlock[147] = NULL;
    this->mPlayerControlBlock[148] = NULL;
    this->mPlayerControlBlock[149] = NULL;
    this->mPlayerControlBlock[150] = NULL;
    this->mPlayerControlBlock[151] = NULL;
    this->mPlayerControlBlock[152] = NULL;
    this->mPlayerControlBlock[153] = NULL;
    this->mPlayerControlBlock[154] = NULL;
    this->mPlayerControlBlock[155] = NULL;
    this->mPlayerControlBlock[156] = NULL;
    this->mPlayerControlBlock[157] = NULL;
    this->mPlayerControlBlock[158] = NULL;
    this->mPlayerControlBlock[159] = NULL;
    this->mPlayerControlBlock[160] = NULL;
    this->mPlayerControlBlock[161] = NULL;
    this->mPlayerControlBlock[162] = NULL;
    this->mPlayerControlBlock[163] = NULL;
    this->mPlayerControlBlock[164] = NULL;
    this->mPlayerControlBlock[165] = NULL;
    this->mPlayerControlBlock[166] = NULL;
    this->mPlayerControlBlock[167] = NULL;
    this->mPlayerControlBlock[168] = NULL;
    this->mPlayerControlBlock[169] = NULL;
    this->mPlayerControlBlock[170] = NULL;
    this->mPlayerControlBlock[171] = NULL;
    this->mPlayerControlBlock[172] = NULL;
    this->mPlayerControlBlock[173] = NULL;
    this->mPlayerControlBlock[174] = NULL;
    this->mPlayerControlBlock[175] = NULL;
    this->mPlayerControlBlock[176] = NULL;
    this->mPlayerControlBlock[177] = NULL;
    this->mPlayerControlBlock[178] = NULL;
    this->mPlayerControlBlock[179] = NULL;
    this->mPlayerControlBlock[180] = NULL;
    this->mPlayerControlBlock[181] = NULL;
    this->mPlayerControlBlock[182] = NULL;
    this->mPlayerControlBlock[183] = NULL;
    this->mPlayerControlBlock[184] = NULL;
    this->mPlayerControlBlock[185] = NULL;
    this->mPlayerControlBlock[186] = NULL;
    this->mPlayerControlBlock[187] = NULL;
    this->mPlayerControlBlock[188] = NULL;
    this->mPlayerControlBlock[189] = NULL;
    this->mPlayerControlBlock[190] = NULL;
    this->mPlayerControlBlock[191] = NULL;
    this->mPlayerControlBlock[192] = NULL;
    this->mPlayerControlBlock[193] = NULL;
    this->mPlayerControlBlock[194] = NULL;
    this->mPlayerControlBlock[195] = NULL;
    this->mPlayerControlBlock[196] = NULL;
    this->mPlayerControlBlock[197] = NULL;
    this->mPlayerControlBlock[198] = NULL;
    this->mPlayerControlBlock[199] = NULL;
    this->mPlayerControlBlock[200] = NULL;
    this->mPlayerControlBlock[201] = NULL;
    this->mPlayerControlBlock[202] = NULL;
    this->mPlayerControlBlock[203] = NULL;
    this->mPlayerControlBlock[204] = NULL;
    this->mPlayerControlBlock[205] = NULL;
    this->mPlayerControlBlock[206] = NULL;
    this->mPlayerControlBlock[207] = NULL;
    this->mPlayerControlBlock[208] = NULL;
    this->mPlayerControlBlock[209] = NULL;
    this->mPlayerControlBlock[210] = NULL;
    this->mPlayerControlBlock[211] = NULL;
    this->mPlayerControlBlock[212] = NULL;
    this->mPlayerControlBlock[213] = NULL;
    this->mPlayerControlBlock[214] = NULL;
    this->mPlayerControlBlock[215] = NULL;
    this->mPlayerControlBlock[216] = NULL;
    this->mPlayerControlBlock[217] = NULL;
    this->mPlayerControlBlock[218] = NULL;
    this->mPlayerControlBlock[219] = NULL;
    this->mPlayerControlBlock[220] = NULL;
    this->mPlayerControlBlock[221] = NULL;
    this->mPlayerControlBlock[222] = NULL;
    this->mPlayerControlBlock[223] = NULL;
    this->mPlayerControlBlock[224] = NULL;
    this->mPlayerControlBlock[225] = NULL;
    this->mPlayerControlBlock[226] = NULL;
    this->mPlayerControlBlock[227] = NULL;
    this->mPlayerControlBlock[228] = NULL;
    this->mPlayerControlBlock[229] = NULL;
    this->mPlayerControlBlock[230] = NULL;
    this->mPlayerControlBlock[231] = NULL;
    this->mPlayerControlBlock[232] = NULL;
    this->mPlayerControlBlock[233] = NULL;
    this->mPlayerControlBlock[234] = NULL;
    this->mPlayerControlBlock[235] = NULL;
    this->mPlayerControlBlock[236] = NULL;
    this->mPlayerControlBlock[237] = NULL;
    this->mPlayerControlBlock[238] = NULL;
    this->mPlayerControlBlock[239] = NULL;
    this->mPlayerControlBlock[240] = NULL;
    this->mPlayerControlBlock[241] = NULL;
    this->mPlayerControlBlock[242] = NULL;
    this->mPlayerControlBlock[243] = NULL;
    this->mPlayerControlBlock[244] = NULL;
    this->mPlayerControlBlock[245] = NULL;
    this->mPlayerControlBlock[246] = NULL;
    this->mPlayerControlBlock[247] = NULL;
    this->mPlayerControlBlock[248] = NULL;
    this->mPlayerControlBlock[249] = NULL;
    this->mPlayerControlBlock[250] = NULL;
    this->mPlayerControlBlock[251] = NULL;
    this->mPlayerControlBlock[252] = NULL;
    this->mPlayerControlBlock[253] = NULL;
    this->mPlayerControlBlock[254] = NULL;
    this->mPlayerControlBlock[255] = NULL;
    this->mAcbFileControlBlock[0] = NULL;
    this->mAcbFileControlBlock[1] = NULL;
    this->mAcbFileControlBlock[2] = NULL;
    this->mAcbFileControlBlock[3] = NULL;
    this->mAcbFileControlBlock[4] = NULL;
    this->mAcbFileControlBlock[5] = NULL;
    this->mAcbFileControlBlock[6] = NULL;
    this->mAcbFileControlBlock[7] = NULL;
    this->mAcbFileControlBlock[8] = NULL;
    this->mAcbFileControlBlock[9] = NULL;
    this->mAcbFileControlBlock[10] = NULL;
    this->mAcbFileControlBlock[11] = NULL;
    this->mAcbFileControlBlock[12] = NULL;
    this->mAcbFileControlBlock[13] = NULL;
    this->mAcbFileControlBlock[14] = NULL;
    this->mAcbFileControlBlock[15] = NULL;
    this->mAcbFileControlBlock[16] = NULL;
    this->mAcbFileControlBlock[17] = NULL;
    this->mAcbFileControlBlock[18] = NULL;
    this->mAcbFileControlBlock[19] = NULL;
    this->mAcbFileControlBlock[20] = NULL;
    this->mAcbFileControlBlock[21] = NULL;
    this->mAcbFileControlBlock[22] = NULL;
    this->mAcbFileControlBlock[23] = NULL;
    this->mAcbFileControlBlock[24] = NULL;
    this->mAcbFileControlBlock[25] = NULL;
    this->mAcbFileControlBlock[26] = NULL;
    this->mAcbFileControlBlock[27] = NULL;
    this->mAcbFileControlBlock[28] = NULL;
    this->mAcbFileControlBlock[29] = NULL;
    this->mAcbFileControlBlock[30] = NULL;
    this->mAcbFileControlBlock[31] = NULL;
    this->mAcbFileControlBlock[32] = NULL;
    this->mAcbFileControlBlock[33] = NULL;
    this->mAcbFileControlBlock[34] = NULL;
    this->mAcbFileControlBlock[35] = NULL;
    this->mAcbFileControlBlock[36] = NULL;
    this->mAcbFileControlBlock[37] = NULL;
    this->mAcbFileControlBlock[38] = NULL;
    this->mAcbFileControlBlock[39] = NULL;
    this->mAcbFileControlBlock[40] = NULL;
    this->mAcbFileControlBlock[41] = NULL;
    this->mAcbFileControlBlock[42] = NULL;
    this->mAcbFileControlBlock[43] = NULL;
    this->mAcbFileControlBlock[44] = NULL;
    this->mAcbFileControlBlock[45] = NULL;
    this->mAcbFileControlBlock[46] = NULL;
    this->mAcbFileControlBlock[47] = NULL;
    this->mAcbFileControlBlock[48] = NULL;
    this->mAcbFileControlBlock[49] = NULL;
    this->mAcbFileControlBlock[50] = NULL;
    this->mAcbFileControlBlock[51] = NULL;
    this->mAcbFileControlBlock[52] = NULL;
    this->mAcbFileControlBlock[53] = NULL;
    this->mAcbFileControlBlock[54] = NULL;
    this->mAcbFileControlBlock[55] = NULL;
    this->mAcbFileControlBlock[56] = NULL;
    this->mAcbFileControlBlock[57] = NULL;
    this->mAcbFileControlBlock[58] = NULL;
    this->mAcbFileControlBlock[59] = NULL;
    this->mAcbFileControlBlock[60] = NULL;
    this->mAcbFileControlBlock[61] = NULL;
    this->mAcbFileControlBlock[62] = NULL;
    this->mAcbFileControlBlock[63] = NULL;
}

