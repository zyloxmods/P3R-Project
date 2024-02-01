#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EFldHitCoreCheckIconType.h"
#include "FFldHitCoreHeroDirectType.h"
#include "FldLocalActor.h"
#include "Templates/SubclassOf.h"
#include "FldHitCore.generated.h"

class AActor;
class AUtlProcActor;
class UPrimitiveComponent;
class USceneComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class XRD777_API AFldHitCore : public AFldLocalActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> mOtherList_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mPriority_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mBfAssetPath_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mBmdAssetPath_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* HitComp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUtlProcActor> mOverlapBluePrint_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mOverlapKeyLock_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUtlProcActor> mKeyPushBluePrint_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mActionKeyLock_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldHitCoreHeroDirectType mHeroDirectType_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldHitCoreCheckIconType mCheckIcon_;
    
    AFldHitCore();
    UFUNCTION(BlueprintCallable)
    void RequestKeyPushBluePrint();
    
    UFUNCTION(BlueprintCallable)
    void OnActorOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnActorOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void CleanupRequest();
    
};

