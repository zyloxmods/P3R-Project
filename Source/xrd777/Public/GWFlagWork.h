#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GWHashBase.h"
#include "GWFlagWork.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class XRD777_API UGWFlagWork : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pBattleDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pCommuDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pEventDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pFieldDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pProgramDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pSystemDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pCounterDataTable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGWHashBase BattleDataHashArry[512];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGWHashBase CommuDataHashArry[3072];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGWHashBase EventDataHashArry[3072];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGWHashBase FieldDataHashArry[5120];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGWHashBase ProgramDataHashArry[512];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGWHashBase SystemDataHashArry[512];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGWHashBase CounterDataHashArry[385];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleDataHashNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommuDataHashNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventDataHashNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FieldDataHashNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgramDataHashNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SystemDataHashNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CounterDataHashNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* mFldLocalFlagDataTable_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGWHashBase mFldLocalFlagDataHashArry_[256];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mFldLocalFlagDataHashNum_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* mFldLocalCounterDataTable_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGWHashBase mFldLocalCounterDataHashArry_[256];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mFldLocalCounterDataHashNum_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* mFldNpcFlagDataTable_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGWHashBase mFldNpcFlagDataHashArry_[256];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mFldNpcFlagDataHashNum_;
    
public:
    UGWFlagWork();
};

