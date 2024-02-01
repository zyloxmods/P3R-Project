#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TestNishidaResource.generated.h"

class UTexture;

UCLASS(Blueprintable)
class XRD777_API UTestNishidaResource : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_pTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> m_pSoftTexture;
    
    UTestNishidaResource();
};

