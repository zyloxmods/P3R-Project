#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFldLevelLoaderType.h"
#include "FldLevelLoaderMonitorActor.generated.h"

UCLASS(Blueprintable)
class AFldLevelLoaderMonitorActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mUniqueId_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldLevelLoaderType mType_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mLevelAssetPath_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mProcTimer_;
    
public:
    AFldLevelLoaderMonitorActor();
    UFUNCTION(BlueprintCallable)
    void OnLoadLevelStreaming();
    
};

