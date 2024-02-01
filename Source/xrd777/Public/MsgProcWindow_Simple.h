#pragma once
#include "CoreMinimal.h"
#include "MsgProcWindowBase.h"
#include "MsgProcWindow_Simple.generated.h"

class UAssetLoader;
class UPlgAsset;
class USprAsset;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API UMsgProcWindow_Simple : public UMsgProcWindowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* MsgSpr_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlgAsset* MsgPlg_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* LayoutDataTable;
    
public:
    UMsgProcWindow_Simple();
};

