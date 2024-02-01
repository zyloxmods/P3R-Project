#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "GenericSelectCharacterTextureItem.h"
#include "GenericSelectCharacterDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UGenericSelectCharacterDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenericSelectCharacterTextureItem> Assets;
    
    UGenericSelectCharacterDataAsset();
};

