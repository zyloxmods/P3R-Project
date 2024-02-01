#pragma once
#include "CoreMinimal.h"
#include "FldLocalActorComp.h"
#include "FldNpcCompOrnamentsInfo.h"
#include "FldNpcCompPropsInfo.h"
#include "FldNpcComp.generated.h"

class UAppCharBaseComp;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldNpcComp : public UFldLocalActorComp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAppCharBaseComp* mCharaBaseComp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mListIndex_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mMajorID_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mMinorID_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mFbnNumber_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSpeakMotionBlendInTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSpeakMotionBlendOutTime_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldNpcCompPropsInfo> mPropsArray_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldNpcCompOrnamentsInfo> mOrnamentsArray_;
    
public:
    UFldNpcComp();
    UFUNCTION(BlueprintCallable)
    void RequestRestartAnimProcByMotion();
    
    UFUNCTION(BlueprintCallable)
    void RequestPauseAnimProcByMotion();
    
    UFUNCTION(BlueprintCallable)
    void RequestLookAtPlayerByMotion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAppCharBaseComp* GetCharBaseComp();
    
};

