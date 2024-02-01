#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "BtlPersonaStatusDelegateDelegate.h"
#include "BtlGuiPersonaStatusComponent.generated.h"

class ABtlActor;
class APersonaStatus;
class UBtlCoreComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlGuiPersonaStatusComponent : public UAppActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APersonaStatus* pActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlActor* pFirstCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlPersonaStatusDelegate OnChangeL1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlPersonaStatusDelegate OnChangeR1;
    
    UBtlGuiPersonaStatusComponent();
    UFUNCTION(BlueprintCallable)
    void UpdatePersonaStatus(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartPersonaSkillHelp();
    
    UFUNCTION(BlueprintCallable)
    void StartPersonaCommentary();
    
    UFUNCTION(BlueprintCallable)
    void SetEquipPersona();
    
    UFUNCTION(BlueprintCallable)
    bool IsEndPersonaStatus();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPersonaStockCount(ABtlActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABtlActor* GetDispActor(UBtlCoreComponent* pCore);
    
    UFUNCTION(BlueprintCallable)
    void DeleteInstance();
    
    UFUNCTION(BlueprintCallable)
    void CreatePersonaStatusTargetSelect(ABtlActor* Actor, UBtlCoreComponent* pCore, TArray<ABtlActor*> PlayerList);
    
    UFUNCTION(BlueprintCallable)
    void CreatePersonaStatus(ABtlActor* Actor, UBtlCoreComponent* pCore, int32 CurrentNum, bool AlwaysChange);
    
    UFUNCTION(BlueprintCallable)
    void CreateInstance();
    
    UFUNCTION(BlueprintCallable)
    void ClosePersonaStatus(UBtlCoreComponent* pCore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPersonaSkillHelp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPersonaCommentary();
    
    UFUNCTION(BlueprintCallable)
    bool CheckPersonaChange();
    
    UFUNCTION(BlueprintCallable)
    void ChangePersonaStatusRightActor();
    
    UFUNCTION(BlueprintCallable)
    bool ChangePersonaStatusRight();
    
    UFUNCTION(BlueprintCallable)
    void ChangePersonaStatusLeftActor();
    
    UFUNCTION(BlueprintCallable)
    bool ChangePersonaStatusLeft();
    
};

