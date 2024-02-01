#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AcbFileControlBlock.generated.h"

class UACBLoadObject;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class SOUNDMANAGER_API UAcbFileControlBlock : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UACBLoadObject* Loader;
    
    UAcbFileControlBlock();
};

