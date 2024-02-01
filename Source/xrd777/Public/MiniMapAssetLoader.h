#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFldType.h"
#include "MiniMapAssetLoader.generated.h"

class UAssetLoader;
class UMiniMapIconListTable;
class USprAsset;
class UTexture;

UCLASS(Blueprintable)
class XRD777_API UMiniMapAssetLoader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadedFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* pMapTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMiniMapIconListTable* pFldMiniMapIconTable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* pMapParts[130];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* pWallTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* pPartMaskSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldType EFldType;
    
public:
    UMiniMapAssetLoader();
    UFUNCTION(BlueprintCallable)
    UTexture* GetWallTex();
    
    UFUNCTION(BlueprintCallable)
    TMap<int32, int32> GetTartarusMapPartIndexList(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    USprAsset* GetPartMaskSpr();
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetPartList(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetMapTexture();
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetMapTex();
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetMapParts(int32 Index);
    
   // UFUNCTION(BlueprintCallable)
//    EFldType GetFldType();
    
    UFUNCTION(BlueprintCallable)
    UMiniMapIconListTable* GetFldMiniMapIconTable();
    
    UFUNCTION(BlueprintCallable)
    UAssetLoader* GetAssetLoader();
    
};

