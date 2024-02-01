#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FldDungeonPartsSelDataTable.generated.h"

USTRUCT(BlueprintType)
struct FFldDungeonPartsSelDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 parts01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 parts02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 parts03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 parts04;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 parts05;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 parts06;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 parts07;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 parts08;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 primBit01;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 primBit02;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 primBit03;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 scndBit01;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 scndBit02;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 scndBit03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 primNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 room;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 roomMax;
    
    XRD777_API FFldDungeonPartsSelDataTable();
};

