#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "UITownMapCameraActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class XRD777_API AUITownMapCameraActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MainCamera_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SchoolCamera_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DormitoryCamera_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PortislandCamera_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PolonianmallCamera_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* IwatodayCamera_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NaganakiCamera_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SchoolActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DormitoryActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PortislandActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PolonianmallActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* IwatodayActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NaganakiActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* StartCamera_;
    
    AUITownMapCameraActor();
    UFUNCTION(BlueprintCallable)
    void Initialize(AActor* MainCamera, AActor* SchoolCamera, AActor* DormitoryCamera, AActor* PortislandCamera, AActor* PolonianmallCamera, AActor* IwatodayCamera, AActor* NaganakiCamera, AActor* SchoolActor, AActor* DormitoryActor, AActor* PortislandActor, AActor* PolonianmallActor, AActor* IwatodayActor, AActor* NaganakiActor, AActor* StartCamera);
    
};

