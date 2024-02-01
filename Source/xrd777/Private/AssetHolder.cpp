#include "AssetHolder.h"

void UAssetHolder::UnloadAsset() {
}

void UAssetHolder::LoadComplete() {
}

void UAssetHolder::LoadAsset() {
}

UAssetHolder::FLoadedDelegate UAssetHolder::GetLoadedDelegate() {
	FLoadedDelegate Delegate;
	return Delegate;
}

void UAssetHolder::ChildLoadComplete(TArray<UObject*> NewLoadedAssets) {
}

UAssetHolder::UAssetHolder() {
}

