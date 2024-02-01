#include "BFLAtlEvtHandwriting.h"

UNiagaraComponent* UBFLAtlEvtHandwriting::SpawnHandwritingAttached(EAtlEvtHandwritingType Type, int32 LoopCount, float CameraOffset, ACharacter* AttachToCharacter, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck) {
    return NULL;
}

UNiagaraComponent* UBFLAtlEvtHandwriting::SpawnHandwritingAtLocation(const UObject* WorldContextObject, EAtlEvtHandwritingType Type, int32 LoopCount, float CameraOffset, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck) {
    return NULL;
}

FName UBFLAtlEvtHandwriting::MakeHandwritingTypeName(EAtlEvtHandwritingType Type) {
    return NAME_None;
}

FName UBFLAtlEvtHandwriting::MakeHandwritingTypeDefaultParamAssetPath(EAtlEvtHandwritingType Type) {
    return NAME_None;
}

FName UBFLAtlEvtHandwriting::MakeHandwritingTypeCharaParamAssetPath(EAtlEvtHandwritingType Type, EAppCharCategoryType CharacterTypeCategoryType, int32 CharaIndexID) {
    return NAME_None;
}

FName UBFLAtlEvtHandwriting::MakeHandwritingTypeAssetPath(EAtlEvtHandwritingType Type) {
    return NAME_None;
}

UBFLAtlEvtHandwriting::UBFLAtlEvtHandwriting() {
}

