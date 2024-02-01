#pragma once
#include "CoreMinimal.h"
#include "MsgProcWindow_Select.h"
#include "MsgProcWindow_Select_Mind.generated.h"

class UAssetLoader;
class UBustupObject;
class UPlgAsset;
class USprAsset;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API UMsgProcWindow_Select_Mind : public UMsgProcWindow_Select {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBustupObject* BustupObject_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* MsgSpr_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlgAsset* MsgPlg_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* LayoutDataTable;
    
public:
    UMsgProcWindow_Select_Mind();
};

