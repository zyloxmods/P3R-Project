#pragma once
#include "CoreMinimal.h"
#include "PoetryTexturePath.generated.h"

USTRUCT(BlueprintType)
struct FPoetryTexturePath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Blur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Ef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Normal;
    
    XRD777_API FPoetryTexturePath();
};

