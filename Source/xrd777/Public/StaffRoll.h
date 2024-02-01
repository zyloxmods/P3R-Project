#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIDrawBaseActor.h"
#include "StaffRoll.generated.h"

class AMoviePlayActor;
class AStaffRollDraw;
class UAssetLoader;
class UFont;
class UStaffRollDataAsset;

UCLASS(Blueprintable)
class XRD777_API AStaffRoll : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pStaffRollDrawLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStaffRollDraw> StaffRollDrawClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaffRollDraw* pStaffRollDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaffRollDataAsset* pStaffRollDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMoviePlayActor* pStaffRollMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* pStaffRollFont;
    
public:
    AStaffRoll();
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION()
    bool Start(int16 Type, bool RoundFlg);
    
    UFUNCTION(BlueprintCallable)
    void Draw();
    
};

