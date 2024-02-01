#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemListItem.h"
#include "CmpItemSystem.generated.h"

UCLASS(Blueprintable)
class XRD777_API UCmpItemSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int16> PartyMemberList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PersonaStockIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemListItem> ItemList;
    
public:
    UCmpItemSystem();
};

