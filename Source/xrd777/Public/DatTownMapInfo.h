#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TownMapDetailTextTable.h"
#include "TownMapInfoNameTable.h"
#include "TownMapInfoTable.h"
#include "DatTownMapInfo.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatTownMapInfo : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTownMapInfoTable> m_aTownMapInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTownMapInfoNameTable> m_aNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTownMapDetailTextTable> m_aDetailTextList;
    
    UDatTownMapInfo();
};

