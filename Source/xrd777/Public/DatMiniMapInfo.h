#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MiniMapInfoTable.h"
#include "DatMiniMapInfo.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatMiniMapInfo : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMiniMapInfoTable> m_aInfoList;
    
public:
    UDatMiniMapInfo();
};

