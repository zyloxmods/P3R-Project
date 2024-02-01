#pragma once
#include "CoreMinimal.h"
#include "BtlPhase.h"
#include "EBtlResultType.h"
#include "BtlPhaseVictory.generated.h"

class UBtlCompensation;
class UBtlCoreComponent;

UCLASS(Blueprintable)
class XRD777_API ABtlPhaseVictory : public ABtlPhase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlCompensation* CompensationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBtlCoreComponent* BtlCore;
    
public:
    ABtlPhaseVictory();
    UFUNCTION(BlueprintCallable)
    void SetResultType(EBtlResultType resulttype);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlResultType GetResultType() const;
    
};

