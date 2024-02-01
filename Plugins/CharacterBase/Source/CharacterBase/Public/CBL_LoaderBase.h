#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CBL_LoaderBase.generated.h"

UCLASS(Blueprintable)
class UCBL_LoaderBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> _LoadedAsset;
    
public:
    UCBL_LoaderBase();
};

