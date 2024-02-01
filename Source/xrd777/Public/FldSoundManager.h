#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FldSoundMngAisacSet.h"
#include "FldSoundManager.generated.h"

class AFldAtomSound;
class AFldPostValumeSound;
class AFldSoundMngChangeAISAC;
class AFldSoundMngChangeTownmapActor;
class UAtomComponent;

UCLASS(Blueprintable)
class XRD777_API UFldSoundManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 mFlag_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldSoundMngChangeAISAC* mChgActorAISAC_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString mComVoicePath_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString mComSePath_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString mGayaSePath_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldAtomSound*> mActorArrays_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAtomComponent*> mAtomCompArray_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldSoundMngAisacSet> mAisacArray_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldPostValumeSound*> mPostVolumeArray_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldSoundMngChangeTownmapActor* mChangeActor_;
    
public:
    UFldSoundManager();
};

