#pragma once
#include "CoreMinimal.h"
#include "EDungeonTBoxType.h"
#include "FldDungeonLayoutDirectActor.h"
#include "FldDungeonLayoutDirectTBoxActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonLayoutDirectTBoxActor : public AFldDungeonLayoutDirectActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonTBoxType tboxType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 money;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Encount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlagName;
    
    AFldDungeonLayoutDirectTBoxActor();
};

