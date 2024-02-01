#include "AutoPlayCommandServer.h"

void UAutoPlayCommandServer::OnReceivedAsString(const UAtlSocketBase* Socket, const FString& str) {
}

void UAutoPlayCommandServer::OnDisconnected(const UAtlSocketBase* Socket) {
}

void UAutoPlayCommandServer::OnConnected(const UAtlSocketBase* Socket) {
}

UAutoPlayCommandServer::UAutoPlayCommandServer() {
    this->Server_ = NULL;
    this->CommandManager_ = NULL;
    this->CommandLogger_ = NULL;
    this->CurrentCommand_ = NULL;
}

