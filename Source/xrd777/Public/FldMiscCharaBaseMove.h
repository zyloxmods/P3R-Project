#pragma once
#include "CoreMinimal.h"
#include "FldLocalActor.h"
#include "FldMiscCharaBaseMoverDelegateDelegate.h"
#include "FldMiscCharaBaseMove.generated.h"

class AActor;
class UFldNpcComp;

UCLASS(Blueprintable)
class XRD777_API AFldMiscCharaBaseMove : public AFldLocalActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldMiscCharaBaseMoverDelegate mEndDelegate_;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mCharactor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldNpcComp* mNpcComp_;
    
public:
    AFldMiscCharaBaseMove();
};

