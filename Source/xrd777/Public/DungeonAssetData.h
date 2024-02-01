#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DungeonAssetData.generated.h"

class UDungeonAssetData;

UCLASS(Blueprintable, NotPlaceable)
class XRD777_API UDungeonAssetData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_pObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDungeonAssetData* m_pSyncData;
    
public:
    UDungeonAssetData();
};

