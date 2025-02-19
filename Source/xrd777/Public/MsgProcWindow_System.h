#pragma once
#include "CoreMinimal.h"
#include "MsgProcWindowBase.h"
#include "Templates/SubclassOf.h"
#include "MsgProcWindow_System.generated.h"

class AitfMsgProgWindow_TUTRIALDraw;
class UAssetLoader;
class UDataTable;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API UMsgProcWindow_System : public UMsgProcWindowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pSystemLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AitfMsgProgWindow_TUTRIALDraw> SystemDrawClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AitfMsgProgWindow_TUTRIALDraw* pSystemDraw;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TextColDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* TextColLayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OkNextLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* OkNextLayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OkNextMaskLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* OkNextMaskLayoutDataTable;
    
public:
    UMsgProcWindow_System();
};

