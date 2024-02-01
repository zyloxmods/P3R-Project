#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MsgProcWindowBase.h"
#include "MsgProcWindow_Assist.generated.h"

class UAssetLoader;
class USprAsset;

UCLASS(Blueprintable)
class XRD777_API UMsgProcWindow_Assist : public UMsgProcWindowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* MsgSpr_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> SupportPos;
    
public:
    UMsgProcWindow_Assist();
};

