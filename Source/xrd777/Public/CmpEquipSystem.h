#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EquipListItem.h"
#include "CmpEquipSystem.generated.h"

class ACmpMainActor;
class UCmpEquip;

UCLASS(Blueprintable)
class XRD777_API UCmpEquipSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int16> PartyMemberList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquipListItem> EquipList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquipListItem> LastEquipList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pMainActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpEquip* pParent;
    
public:
    UCmpEquipSystem();
};

