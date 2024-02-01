#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "ELayoutDirType.h"
#include "ELayoutGroup.h"
#include "ELayoutType.h"
#include "ELayoutUsageType.h"
#include "FldDungeonLayoutActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonLayoutActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELayoutType LayoutType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELayoutUsageType UsageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELayoutGroup GroupNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELayoutDirType Dir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SpawnSelNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Wall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EventSpace;
    
    AFldDungeonLayoutActor();
};

