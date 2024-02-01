#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIVoiceBase.h"
#include "UIVoiceAnswer.generated.h"

class AUIVoiceAnswerDraw;
class UAssetLoader;
class UBmdAsset;
class UDataTable;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API AUIVoiceAnswer : public AUIVoiceBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* BmdAsset_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUIVoiceAnswerDraw> VoiceAnswerDrawSubClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIVoiceAnswerDraw* pVoiceAnswerDrawActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* LayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* LayoutTextColDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pParamLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pParamTextColLayoutData;
    
public:
    AUIVoiceAnswer();
};

