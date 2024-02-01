#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VeveWork.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class XRD777_API UVeveWork : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pTable;
    
public:
    UVeveWork();
};

