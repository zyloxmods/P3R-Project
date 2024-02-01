#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIVoiceBase.h"
#include "UIVoiceAction.generated.h"

class AUIVoiceActionDraw;
class UAssetLoader;
class UDataTable;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API AUIVoiceAction : public AUIVoiceBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUIVoiceActionDraw> VoiceActionDrawSubClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIVoiceActionDraw* pVoiceActionDrawActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* LayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pParamLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
public:
    AUIVoiceAction();
};

