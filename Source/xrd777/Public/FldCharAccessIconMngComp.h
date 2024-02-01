#pragma once
#include "CoreMinimal.h"
#include "FldLocalActorComp.h"
#include "FldCharAccessIconMngComp.generated.h"

class AActor;
class UAppCharBaseComp;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldCharAccessIconMngComp : public UFldLocalActorComp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAppCharBaseComp* mCharaBaseComp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mIconActor_;
    
public:
    UFldCharAccessIconMngComp();
};

