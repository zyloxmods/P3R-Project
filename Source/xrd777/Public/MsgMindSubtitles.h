#pragma once
#include "CoreMinimal.h"
#include "MsgItem.h"
#include "MsgMindSubtitles.generated.h"

class UAssetLoader;
class UTexture;

UCLASS(Blueprintable)
class XRD777_API UMsgMindSubtitles : public UMsgItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* pTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
public:
    UMsgMindSubtitles();
};

