#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MsgItemInfo.h"
#include "MsgItem.generated.h"

class UMsgProcWindowBase;

UCLASS(Blueprintable)
class XRD777_API UMsgItem : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMsgItemInfo> MssageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMsgItemInfo> SpeakerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMsgProcWindowBase* mpMsgProcWindow;
    
public:
    UMsgItem();
};

