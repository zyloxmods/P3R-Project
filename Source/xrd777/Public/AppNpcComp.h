#pragma once
#include "CoreMinimal.h"
#include "AppCharBaseComp.h"
#include "AppNpcComp.generated.h"

class ANpcBaseCore;
class UAppCharLoader;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UAppNpcComp : public UAppCharBaseComp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANpcBaseCore* mBaseCore_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppCharLoader* Loader;
    
public:
    UAppNpcComp();
    UFUNCTION(BlueprintCallable)
    void SetFootForBP(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetCosTexID(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ANpcBaseCore* GetBaseCore() const;
    
};

