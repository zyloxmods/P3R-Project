#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "FldDungeonBattleResult.generated.h"

class UAssetLoader;
class UBfAsset;

UCLASS(Blueprintable)
class XRD777_API AFldDungeonBattleResult : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBfAsset* m_pBfAsset;
    
public:
    AFldDungeonBattleResult();
    UFUNCTION(BlueprintCallable)
    void Wait();
    
    UFUNCTION(BlueprintCallable)
    void StartScript();
    
    UFUNCTION(BlueprintCallable)
    void Run();
    
    UFUNCTION(BlueprintCallable)
    void Load();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void End();
    
};

