#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GlobalGameData.generated.h"

UCLASS(Blueprintable)
class XRD777_API UGlobalGameData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> mFlags_ALWAYS_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> mFlags_ANY_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> mCounters_ALWAYS_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> mCounters_ANY_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> mComItems_ALWAYS_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> mComItems_ANY_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> mEvtItems_ALWAYS_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> mEvtItems_ANY_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> mDlcItems_ALWAYS_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> mNotInheritanceItems_;
    
    UGlobalGameData();
    UFUNCTION(BlueprintCallable)
    static void StartDataInitialize();
    
    UFUNCTION(BlueprintCallable)
    static void SetDataInheritance_ALWAYS();
    
    UFUNCTION(BlueprintCallable)
    static void SetDataInheritance();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDataInheritance();
    
};

