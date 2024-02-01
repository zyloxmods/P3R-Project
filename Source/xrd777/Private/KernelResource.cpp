#include "KernelResource.h"

UKernelResource::UKernelResource() {
    this->_DevelopmentFont = NULL;
    this->_RenderTarget.AddDefaulted(9);
    this->_LoadHandle = NULL;
}

