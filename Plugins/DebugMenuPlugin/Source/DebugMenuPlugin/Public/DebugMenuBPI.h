#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugMenuBoolEventDelegateDelegate.h"
#include "DebugMenuEventDelegateDelegate.h"
#include "DebugMenuItem.h"
#include "DebugMenuBPI.generated.h"

class ADebugMenuBPI_Actor;
class UDebugMenuBase;
class UWorld;

UCLASS(Blueprintable)
class DEBUGMENUPLUGIN_API UDebugMenuBPI : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* _World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuBase* _DebugMenuBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADebugMenuBPI_Actor* _Actor;
    
public:
    UDebugMenuBPI();
    UFUNCTION(BlueprintCallable)
    bool Exit();
    
    UFUNCTION(BlueprintCallable)
    bool CreateMenu(FDebugMenuEventDelegate Event, UPARAM(Ref) FDebugMenuItem& InMenuItem, const FString& MenuName, FDebugMenuItem& OutMenuItem);
    
    UFUNCTION(BlueprintCallable)
    bool CreateCaption(const FString& CaptionName, FDebugMenuItem& OutMenuItem);
    
    UFUNCTION(BlueprintCallable)
    bool CreateBool(FDebugMenuBoolEventDelegate Event, UPARAM(Ref) FDebugMenuItem& InMenuItem, const FString& MenuName, bool Default, FDebugMenuItem& OutMenuItem);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool Create(const UObject* WorldContextObject, UClass* InClass, float X, float Y);
    
};

