#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommunityWork.generated.h"

class UAssetLoader;
class UCommunityHandler;
class UHeroParameterHandle;
class UVeveWork;

UCLASS(Blueprintable)
class XRD777_API UCommunityWork : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunityHandler* pCommunityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVeveWork* pVeveWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHeroParameterHandle* pHeroParameterHandle;
    
public:
    UCommunityWork();
};

