#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BfAsset.generated.h"

UCLASS(Blueprintable)
class BFASSETPLUGIN_API UBfAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> mBuf;
    
    UBfAsset();
};

