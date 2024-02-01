#pragma once
#include "CoreMinimal.h"
#include "FldLocalActorComp.h"
#include "FldCharEmotionIconMngComp.generated.h"

class AHandwritingSpawner;
class UAppCharBaseComp;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldCharEmotionIconMngComp : public UFldLocalActorComp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAppCharBaseComp* mCharaBaseComp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHandwritingSpawner* mHandwritingSpawner_;
    
public:
    UFldCharEmotionIconMngComp();
};

