#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FldCharKeyParam.h"
#include "FldCharMajorBgData.h"
#include "FldCharSpeed.h"
#include "FldPartnerData.h"
#include "FldPlayerData.h"
#include "FldCharDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UFldCharDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldCharSpeed DailySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldCharSpeed DungeonSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFldCharMajorBgData> MajorBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldPlayerData Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldPartnerData Partner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldCharKeyParam Key;
    
    UFldCharDataAsset();
    UFUNCTION(BlueprintCallable)
    void PlayerOutputLog();
    
};

