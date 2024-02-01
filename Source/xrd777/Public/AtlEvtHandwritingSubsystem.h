#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AtlEvtHandwritingData.h"
#include "AtlEvtHandwritingSubsystem.generated.h"

class UAtlEvtHandwritingDataAsset;

UCLASS(Blueprintable)
class XRD777_API UAtlEvtHandwritingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlEvtHandwritingDataAsset* EvtHandwritingAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlEvtHandwritingData> EvtHandwritingDefaultDatas;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FAtlEvtHandwritingData> EvtHandwritingDataMap;
    
public:
    UAtlEvtHandwritingSubsystem();
    UFUNCTION(BlueprintCallable)
    void LoadEventHandwrintingData();
    
};

