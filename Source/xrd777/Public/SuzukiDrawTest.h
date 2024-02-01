#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "Templates/SubclassOf.h"
#include "SuzukiDrawTest.generated.h"

class ASuzukiDrawTestDraw;
class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API ASuzukiDrawTest : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASuzukiDrawTestDraw> SuzukiDrawTestDrawClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASuzukiDrawTestDraw* pSuzukiDrawTestDraw;
    
public:
    ASuzukiDrawTest();
};

