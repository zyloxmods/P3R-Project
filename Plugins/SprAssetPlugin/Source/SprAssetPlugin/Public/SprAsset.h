#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SprDataArray.h"
#include "SprAsset.generated.h"

class UTexture;

UCLASS(Blueprintable)
class SPRASSETPLUGIN_API USprAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> mTexArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FSprDataArray> SprDatas;
    
    USprAsset();
};

