#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPExtensionsFunctionLibrary.generated.h"

class UMeshComponent;
class UPlanarReflectionComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class XRD777_API UBPExtensionsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPExtensionsFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetScreenPercentage(UPlanarReflectionComponent* inComponent, int32 inValue);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveRenderMesh(USkeletalMeshComponent* targetMesh);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetScreenPercentage(UPlanarReflectionComponent* inComponent);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FLinearColor> GetInverseMatrix(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    static void DetachSocketAttachment(UMeshComponent* Target, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    static void CommitConsoleLog(const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeSkeletalMesh(USkeletalMeshComponent* targetMesh, USkeletalMesh* changeMesh);
    
    UFUNCTION(BlueprintCallable)
    static UMeshComponent* AttachStaticMesh(UMeshComponent* Target, FName SocketName, UStaticMesh* attachSTMesh);
    
    UFUNCTION(BlueprintCallable)
    static UMeshComponent* AttachSkeletalMesh(UMeshComponent* Target, FName SocketName, USkeletalMesh* attachSKMesh);
    
    UFUNCTION(BlueprintCallable)
    static void AttachMeshComponent(UMeshComponent* Target, FName SocketName, UMeshComponent* AttachComponent);
    
};

