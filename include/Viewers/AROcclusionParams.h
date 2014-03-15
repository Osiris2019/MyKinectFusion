#ifndef AR_OCCLUSION_PARAMS_H
#define AR_OCCLUSION_PARAMS_H

typedef struct AROcclusionParams
{
	GLuint *texVBO;
	int realRGBIndex;
	int realDepthIndex;
	int virtualRGBIndex;
	int virtualDepthIndex;
	int curvatureMapIndex; //ghostViewBasedOnCurvature
	int contoursMapIndex; //ghostViewBasedOnClipping
	int backgroundMapIndex; //ghostViewBasedOnSubtractionMask
	int subtractionMapIndex; //ghostViewBasedOnSubtractionMask
	int faceMapIndex; //ghostViewBasedOnSubtractionMask
	int windowWidth;
	int windowHeight;
	bool ARPolygonal;
	bool ARFromKinectFusionVolume;
	bool ARFromVolumeRendering;
	bool alphaBlending;
	bool ghostViewBasedOnCurvatureMap;
	bool ghostViewBasedOnDistanceFalloff;
	bool ghostViewBasedOnClipping;
	bool ghostViewBasedOnSubtractionMask;
	float curvatureWeight;
	float distanceFalloffWeight;
	float clippingWeight;
	float focusPoint[2];
	float focusRadius;
} AROcclusionParams;

#endif