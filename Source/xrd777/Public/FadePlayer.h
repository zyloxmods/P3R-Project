#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EFadeMode.h"
#include "EFadingState.h"
#include "FadeProperties.h"
#include "FadePlayer.generated.h"

class UFadeProgramBase;

UCLASS(Blueprintable)
class XRD777_API UFadePlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFadeProgramBase*> Programs_;
    
public:
    UFadePlayer();
    UFUNCTION(BlueprintCallable)
    void SetColor(float R, float G, float B);
    
    UFUNCTION(BlueprintCallable)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFilled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistNextFade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressRate(bool Inverse) const;
    
    UFUNCTION(BlueprintPure)
    EFadingState GetFadingState() const;
    
    UFUNCTION(BlueprintPure)
    EFadeMode GetFadeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFadeDuration() const;
    
    UFUNCTION(BlueprintCallable)
    FFadeProperties GetDefaultProperties(int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentStateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetColor() const;
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(int32 Type, const FFadeProperties& Props);
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(int32 Type, const FFadeProperties& Props);
    
};

