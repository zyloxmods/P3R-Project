#pragma once
#include "CoreMinimal.h"
#include "MsgProcWindow_Select.h"
#include "MsgProcWindow_Select_Simple.generated.h"

class UBustupObject;
class UPlgAsset;
class USprAsset;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API UMsgProcWindow_Select_Simple : public UMsgProcWindow_Select {
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
    UUILayoutDataTable* LayoutDataTable;
    
public:
    UMsgProcWindow_Select_Simple();
};

