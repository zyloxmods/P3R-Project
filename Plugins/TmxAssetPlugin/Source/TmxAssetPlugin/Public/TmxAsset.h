#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TmxAsset.generated.h"

class UTexture;

UCLASS(Blueprintable)
class TMXASSETPLUGIN_API UTmxAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* mpTex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int8> mBuf;
    
    UTmxAsset();
};

