#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EAnimPackID.h"
#include "EAppCharCategoryType.h"
#include "AppCharAnimDataAsset.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class XRD777_API UAppCharAnimDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimPackID PackId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppCharCategoryType Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UClass*> SpecialAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UAnimSequenceBase*> Anims;
    
public:
    UAppCharAnimDataAsset();
protected:
    UFUNCTION(BlueprintCallable)
    void Make();
    
};

