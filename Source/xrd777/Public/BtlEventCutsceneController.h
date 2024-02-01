#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BtlCutsceneHandleData.h"
#include "BtlEventCutsceneController.generated.h"

class ALevelSequenceActor;
class UAssetLoader;
class UDataTable;

UCLASS(Blueprintable)
class XRD777_API UBtlEventCutsceneController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SequenceTable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlCutsceneHandleData LoadSequence[50];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* LoaderTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* AllLoader;
    
public:
    UBtlEventCutsceneController();
};

