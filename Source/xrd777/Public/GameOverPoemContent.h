#pragma once
#include "CoreMinimal.h"
#include "GameOverPoemContent.generated.h"

class UMaterialInstanceDynamic;
class UTexture;

USTRUCT(BlueprintType)
struct FGameOverPoemContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_pEfTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_pNormalTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pMatNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pMatEf;
    
    XRD777_API FGameOverPoemContent();
};

