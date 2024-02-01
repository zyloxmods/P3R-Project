#pragma once
#include "CoreMinimal.h"
#include "FldPlayerHolder.generated.h"

class APawn;
class UFldPlayerComp;
class UFldPlayerDungeonComp;

USTRUCT(BlueprintType)
struct FFldPlayerHolder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldPlayerComp* PlayerComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldPlayerDungeonComp* DungeonComp;
    
public:
    XRD777_API FFldPlayerHolder();
};

