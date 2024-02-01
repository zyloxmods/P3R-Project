#pragma once
#include "CoreMinimal.h"
#include "FFldMiscCharBaseReload_Type.h"
#include "FldMiscCharBaseReload_Data.generated.h"

class UAppCharacterComp;

USTRUCT(BlueprintType)
struct FFldMiscCharBaseReload_Data {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldMiscCharBaseReload_Type mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAppCharacterComp* mCharaComp;
    
    XRD777_API FFldMiscCharBaseReload_Data();
};

