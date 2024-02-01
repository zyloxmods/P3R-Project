#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UIMorphTestActor.generated.h"

class ACameraActor;
class USprAsset;
class UTexture;
class UUimAsset;

UCLASS(Blueprintable)
class XRD777_API AUIMorphTestActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUimAsset* m_pUimMain;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UUimAsset* mpUimSubAry[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUimAsset* m_pUimCross;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUimAsset* m_pUimColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUimAsset* m_pUimUV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUimAsset* m_pUimPoly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUimAsset* m_pUimUVCol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_TexMain;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_TexSubAry[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_TexMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* pMayaCamera;
    
public:
    AUIMorphTestActor();
};

