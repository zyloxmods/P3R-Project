#include "MiniMapAssetLoader.h"

UTexture* UMiniMapAssetLoader::GetWallTex() {
    return NULL;
}

TMap<int32, int32> UMiniMapAssetLoader::GetTartarusMapPartIndexList(int32 Index) {
    return TMap<int32, int32>();
}

USprAsset* UMiniMapAssetLoader::GetPartMaskSpr() {
    return NULL;
}

TArray<uint8> UMiniMapAssetLoader::GetPartList(int32 Index) {
    return TArray<uint8>();
}

UTexture* UMiniMapAssetLoader::GetMapTexture() {
    return NULL;
}

UTexture* UMiniMapAssetLoader::GetMapTex() {
    return NULL;
}

UTexture* UMiniMapAssetLoader::GetMapParts(int32 Index) {
    return NULL;
}
/*
EFldType UMiniMapAssetLoader::GetFldType() {
    return EFldType::DailyField;
}*/

UMiniMapIconListTable* UMiniMapAssetLoader::GetFldMiniMapIconTable() {
    return NULL;
}

UAssetLoader* UMiniMapAssetLoader::GetAssetLoader() {
    return NULL;
}

UMiniMapAssetLoader::UMiniMapAssetLoader() {
    this->pAssetLoader = NULL;
    this->bLoadedFlag = false;
    this->pMapTex = NULL;
    this->pFldMiniMapIconTable = NULL;
    this->pMapParts[0] = NULL;
    this->pMapParts[1] = NULL;
    this->pMapParts[2] = NULL;
    this->pMapParts[3] = NULL;
    this->pMapParts[4] = NULL;
    this->pMapParts[5] = NULL;
    this->pMapParts[6] = NULL;
    this->pMapParts[7] = NULL;
    this->pMapParts[8] = NULL;
    this->pMapParts[9] = NULL;
    this->pMapParts[10] = NULL;
    this->pMapParts[11] = NULL;
    this->pMapParts[12] = NULL;
    this->pMapParts[13] = NULL;
    this->pMapParts[14] = NULL;
    this->pMapParts[15] = NULL;
    this->pMapParts[16] = NULL;
    this->pMapParts[17] = NULL;
    this->pMapParts[18] = NULL;
    this->pMapParts[19] = NULL;
    this->pMapParts[20] = NULL;
    this->pMapParts[21] = NULL;
    this->pMapParts[22] = NULL;
    this->pMapParts[23] = NULL;
    this->pMapParts[24] = NULL;
    this->pMapParts[25] = NULL;
    this->pMapParts[26] = NULL;
    this->pMapParts[27] = NULL;
    this->pMapParts[28] = NULL;
    this->pMapParts[29] = NULL;
    this->pMapParts[30] = NULL;
    this->pMapParts[31] = NULL;
    this->pMapParts[32] = NULL;
    this->pMapParts[33] = NULL;
    this->pMapParts[34] = NULL;
    this->pMapParts[35] = NULL;
    this->pMapParts[36] = NULL;
    this->pMapParts[37] = NULL;
    this->pMapParts[38] = NULL;
    this->pMapParts[39] = NULL;
    this->pMapParts[40] = NULL;
    this->pMapParts[41] = NULL;
    this->pMapParts[42] = NULL;
    this->pMapParts[43] = NULL;
    this->pMapParts[44] = NULL;
    this->pMapParts[45] = NULL;
    this->pMapParts[46] = NULL;
    this->pMapParts[47] = NULL;
    this->pMapParts[48] = NULL;
    this->pMapParts[49] = NULL;
    this->pMapParts[50] = NULL;
    this->pMapParts[51] = NULL;
    this->pMapParts[52] = NULL;
    this->pMapParts[53] = NULL;
    this->pMapParts[54] = NULL;
    this->pMapParts[55] = NULL;
    this->pMapParts[56] = NULL;
    this->pMapParts[57] = NULL;
    this->pMapParts[58] = NULL;
    this->pMapParts[59] = NULL;
    this->pMapParts[60] = NULL;
    this->pMapParts[61] = NULL;
    this->pMapParts[62] = NULL;
    this->pMapParts[63] = NULL;
    this->pMapParts[64] = NULL;
    this->pMapParts[65] = NULL;
    this->pMapParts[66] = NULL;
    this->pMapParts[67] = NULL;
    this->pMapParts[68] = NULL;
    this->pMapParts[69] = NULL;
    this->pMapParts[70] = NULL;
    this->pMapParts[71] = NULL;
    this->pMapParts[72] = NULL;
    this->pMapParts[73] = NULL;
    this->pMapParts[74] = NULL;
    this->pMapParts[75] = NULL;
    this->pMapParts[76] = NULL;
    this->pMapParts[77] = NULL;
    this->pMapParts[78] = NULL;
    this->pMapParts[79] = NULL;
    this->pMapParts[80] = NULL;
    this->pMapParts[81] = NULL;
    this->pMapParts[82] = NULL;
    this->pMapParts[83] = NULL;
    this->pMapParts[84] = NULL;
    this->pMapParts[85] = NULL;
    this->pMapParts[86] = NULL;
    this->pMapParts[87] = NULL;
    this->pMapParts[88] = NULL;
    this->pMapParts[89] = NULL;
    this->pMapParts[90] = NULL;
    this->pMapParts[91] = NULL;
    this->pMapParts[92] = NULL;
    this->pMapParts[93] = NULL;
    this->pMapParts[94] = NULL;
    this->pMapParts[95] = NULL;
    this->pMapParts[96] = NULL;
    this->pMapParts[97] = NULL;
    this->pMapParts[98] = NULL;
    this->pMapParts[99] = NULL;
    this->pMapParts[100] = NULL;
    this->pMapParts[101] = NULL;
    this->pMapParts[102] = NULL;
    this->pMapParts[103] = NULL;
    this->pMapParts[104] = NULL;
    this->pMapParts[105] = NULL;
    this->pMapParts[106] = NULL;
    this->pMapParts[107] = NULL;
    this->pMapParts[108] = NULL;
    this->pMapParts[109] = NULL;
    this->pMapParts[110] = NULL;
    this->pMapParts[111] = NULL;
    this->pMapParts[112] = NULL;
    this->pMapParts[113] = NULL;
    this->pMapParts[114] = NULL;
    this->pMapParts[115] = NULL;
    this->pMapParts[116] = NULL;
    this->pMapParts[117] = NULL;
    this->pMapParts[118] = NULL;
    this->pMapParts[119] = NULL;
    this->pMapParts[120] = NULL;
    this->pMapParts[121] = NULL;
    this->pMapParts[122] = NULL;
    this->pMapParts[123] = NULL;
    this->pMapParts[124] = NULL;
    this->pMapParts[125] = NULL;
    this->pMapParts[126] = NULL;
    this->pMapParts[127] = NULL;
    this->pMapParts[128] = NULL;
    this->pMapParts[129] = NULL;
    this->pWallTex = NULL;
    this->pPartMaskSpr = NULL;
    this->EFldType = EFldType::DailyField;
}

