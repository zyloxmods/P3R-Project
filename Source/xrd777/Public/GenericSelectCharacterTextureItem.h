#pragma once
#include "CoreMinimal.h"
#include "GenericSelectCharacterTextureItem.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FGenericSelectCharacterTextureItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 characterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* pTexture;
    
    XRD777_API FGenericSelectCharacterTextureItem();
};

