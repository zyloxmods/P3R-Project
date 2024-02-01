#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BtlEncountWipeCore.h"
#include "BtlGuiEncountWipe.generated.h"

class ACharacter;
class UAppCharacterComp;

UCLASS(Blueprintable)
class XRD777_API ABtlGuiEncountWipe : public ABtlEncountWipeCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector startLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector endLine;
    
    ABtlGuiEncountWipe();
    UFUNCTION(BlueprintCallable)
    void SetTransform(FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterAttackAnim();
    
    UFUNCTION(BlueprintCallable)
    UAppCharacterComp* GetCharacterComp();
    
    UFUNCTION(BlueprintCallable)
    float GetCharacterAnimTime();
    
    UFUNCTION(BlueprintCallable)
    void EndWipe();
    
};

