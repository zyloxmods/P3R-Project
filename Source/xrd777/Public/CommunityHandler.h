#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommunityHandler.generated.h"

class ACommunityEventManager;
class UChristmasEventDataAsset;
class UCoefficientDataAsset;
class UCommunityEventDataAsset;
class UCommunityPresentDataAsset;
class UDataTable;
class UHolidayEventDataAsset;
class UHolidayScheduleDataAsset;
class UMoviesEventDataAsset;
class USummerFestivalEventDataAsset;

UCLASS(Blueprintable)
class XRD777_API UCommunityHandler : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunityEventDataAsset* pEventDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHolidayEventDataAsset* pHolidayEventDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHolidayScheduleDataAsset* pHolidayScheduleDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pMemberFormatTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pNameFormatTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCoefficientDataAsset* pCoefficientDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunityPresentDataAsset* pPresentDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoviesEventDataAsset* pMoviesEventDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USummerFestivalEventDataAsset* pSummerFestivalEventDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChristmasEventDataAsset* pChristmasEventDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACommunityEventManager* pEventManager;
    
public:
    UCommunityHandler();
};

