#pragma once
#include "CoreMinimal.h"
#include "SprData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FSprData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float U0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float V0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float U1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float v1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RGBA[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 StretchLen[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ScalingSize[2];
    
    SPRASSETPLUGIN_API FSprData();
};

