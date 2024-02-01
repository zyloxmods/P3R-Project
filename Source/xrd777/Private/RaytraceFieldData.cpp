#include "RaytraceFieldData.h"

FRaytraceFieldData::FRaytraceFieldData() {
    this->minorId = 0;
    this->rayTraceEnable = false;
    this->maxRoughness = 0.00f;
    this->reflectionMaxBounces = 0;
    this->reflectionShadow = 0;
    this->rayTracingCulling = 0;
    this->rayTracingCullingRadius = 0;
    this->rayTracingCullingAngle = 0;
    this->rayTracingGeometryWPOCullingRadius = 0;
}

