#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "EAtlEvtEventCategoryType.h"
#include "ECldSeason.h"
#include "ECldTimeZone.h"
#include "AtlEvtEventEditHelper.generated.h"

class AInitReadActor;

UCLASS(Blueprintable)
class XRD777_API AAtlEvtEventEditHelper : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadAllSublevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventSublevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlEvtEventCategoryType EventCategoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFieldEventInterpFieldCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECldTimeZone PreviewTimeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECldSeason PreviewSeason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreviewCrowd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewCrowdMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewCrowdDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECldTimeZone PreviewCrowdTimeZone;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AInitReadActor> InitReadActor;
    
public:
    AAtlEvtEventEditHelper();
    UFUNCTION(BlueprintCallable)
    void SetPreviewCrowdSettings(int32 InCrowdMonth, int32 InCrowdDay, ECldTimeZone InCrowdTimeZone, bool bInPreviewCrowd);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadedLevelInPIE();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRankAEvent() const;
    
};

