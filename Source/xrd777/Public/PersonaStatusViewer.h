#pragma once
#include "CoreMinimal.h"
#include "DebugViewer.h"
#include "PersonaStatusListItem.h"
#include "PersonaStatusViewer.generated.h"

class APersonaStatus;

UCLASS(Blueprintable)
class XRD777_API APersonaStatusViewer : public ADebugViewer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPersonaStatusListItem> StatusList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APersonaStatus* pPersonaStatus;
    
public:
    APersonaStatusViewer();
};

