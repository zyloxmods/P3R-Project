#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UICompleteBookRegist.generated.h"

class UAssetLoader;
class USprAsset;
class UUIVelvetRoomOwner;

UCLASS(Blueprintable)
class XRD777_API UUICompleteBookRegist : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIVelvetRoomOwner* m_pOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpr;
    
    UUICompleteBookRegist();
};

