#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "PersonaStatusListItem.h"
#include "PersonaStatus.generated.h"

class APersonaStatusDraw;
class UPersonaStatusSeq;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API APersonaStatus : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonaStatusSeq* Sequence_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPersonaStatusListItem> PersonaList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPersonaStatusListItem> RegistList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APersonaStatusDraw* pPersonaStatusDraw;
    
public:
    APersonaStatus();
};

