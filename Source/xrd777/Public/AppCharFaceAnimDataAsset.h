#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EAppCharAnimCategoryType.h"
#include "EAppCharCategoryType.h"
#include "EAppCharFaceAnimID.h"
#include "AppCharFaceAnimDataAsset.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class XRD777_API UAppCharFaceAnimDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppCharCategoryType Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UAnimSequenceBase*> Anims;
    
public:
    UAppCharFaceAnimDataAsset();
protected:
    UFUNCTION(BlueprintCallable)
    void Make();
    
public:
    UFUNCTION(BlueprintCallable)
    static FString GetAssetPath(EAppCharFaceAnimID FaceAnimID, EAppCharCategoryType CharCategory, int32 NewCharId, EAppCharAnimCategoryType AnimCategory);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddExtra();
    
};

