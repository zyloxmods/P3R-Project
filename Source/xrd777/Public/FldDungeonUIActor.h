#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "DungeonUIDrawDataTable.h"
#include "EDungeonUIType.h"
#include "FldDungeonUIActor.generated.h"

class UAssetLoader;
class UDataTable;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API AFldDungeonUIActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonUIType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDungeonUIDrawDataTable DrawTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* LayoutDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pLoader;
    
public:
    AFldDungeonUIActor();
};

