#pragma once
#include "CoreMinimal.h"
#include "AtomComponent.h"
#include "AppCharFootstepsOverwrite.h"
#include "UAppCharFootstepsLabel.h"
#include "AppCharFootstepsAtom.generated.h"

class AActor;
class USoundAtomCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UAppCharFootstepsAtom : public UAtomComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUAppCharFootstepsLabel Lable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUAppCharFootstepsLabel DefaultLable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OverwriteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAppCharFootstepsOverwrite> mKeepOverwrites_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
public:
    UAppCharFootstepsAtom();
    UFUNCTION(BlueprintCallable)
    void SetWalkCue(USoundAtomCue* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRunCue(USoundAtomCue* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(const bool Value);
    
};

