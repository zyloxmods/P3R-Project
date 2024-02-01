#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBtlFormationSizeType.h"
#include "BtlFormationPoint.generated.h"

UCLASS(Blueprintable)
class XRD777_API ABtlFormationPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlFormationSizeType SizeCategory;
    
    ABtlFormationPoint();
};

