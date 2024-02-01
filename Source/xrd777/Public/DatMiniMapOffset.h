#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MiniMapOffsetTable.h"
#include "DatMiniMapOffset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatMiniMapOffset : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMiniMapOffsetTable> m_aOffsetList;
    
public:
    UDatMiniMapOffset();
};

