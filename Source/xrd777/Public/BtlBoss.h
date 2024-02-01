#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BtlBoss.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class XRD777_API UBtlBoss : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CameraTable;
    
public:
    UBtlBoss();
};

