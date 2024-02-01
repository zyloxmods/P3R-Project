#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "BasePartyPanel.generated.h"

class UDataTable;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API ABasePartyPanel : public AUIBaseActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* LayoutDataTable;
    
public:
    ABasePartyPanel();
};

