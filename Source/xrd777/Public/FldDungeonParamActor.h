#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AppActor.h"
#include "FldDungeonParamActor.generated.h"

class UFldDungeonFloorFlags;
class UFldDungeonPartVariation;

UCLASS(Blueprintable)
class XRD777_API AFldDungeonParamActor : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DungeonTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath PartVariationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath FloorFlagsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFldDungeonPartVariation* m_pPartVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFldDungeonFloorFlags* m_pFloorFlags;
    
public:
    AFldDungeonParamActor();
};

