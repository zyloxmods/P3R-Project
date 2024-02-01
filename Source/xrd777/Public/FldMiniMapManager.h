#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FldMiniMapManager.generated.h"

class AFldHitCharacter;

UCLASS(Blueprintable)
class XRD777_API UFldMiniMapManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldHitCharacter*> mCharactorList_;
    
public:
    UFldMiniMapManager();
};

