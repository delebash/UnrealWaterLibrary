// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterLibraryBP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGerstnerWaterWaves;
class UObject;
class UWaterWaves;
#ifdef WATERLIBRARY_WaterLibraryBP_generated_h
#error "WaterLibraryBP.generated.h already included, missing '#pragma once' in WaterLibraryBP.h"
#endif
#define WATERLIBRARY_WaterLibraryBP_generated_h

#define FID_Dev_Unreal_Build55_Plugins_UnrealWaterLibrary_Source_WaterLibrary_Public_WaterLibraryBP_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execLoadWaterWaveAssetFile); \
	DECLARE_FUNCTION(execRecalcWaveData);


#define FID_Dev_Unreal_Build55_Plugins_UnrealWaterLibrary_Source_WaterLibrary_Public_WaterLibraryBP_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUWaterLibraryBP(); \
	friend struct Z_Construct_UClass_UWaterLibraryBP_Statics; \
public: \
	DECLARE_CLASS(UWaterLibraryBP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaterLibrary"), NO_API) \
	DECLARE_SERIALIZER(UWaterLibraryBP)


#define FID_Dev_Unreal_Build55_Plugins_UnrealWaterLibrary_Source_WaterLibrary_Public_WaterLibraryBP_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterLibraryBP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterLibraryBP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterLibraryBP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterLibraryBP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWaterLibraryBP(UWaterLibraryBP&&); \
	UWaterLibraryBP(const UWaterLibraryBP&); \
public: \
	NO_API virtual ~UWaterLibraryBP();


#define FID_Dev_Unreal_Build55_Plugins_UnrealWaterLibrary_Source_WaterLibrary_Public_WaterLibraryBP_h_25_PROLOG
#define FID_Dev_Unreal_Build55_Plugins_UnrealWaterLibrary_Source_WaterLibrary_Public_WaterLibraryBP_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_Unreal_Build55_Plugins_UnrealWaterLibrary_Source_WaterLibrary_Public_WaterLibraryBP_h_28_RPC_WRAPPERS \
	FID_Dev_Unreal_Build55_Plugins_UnrealWaterLibrary_Source_WaterLibrary_Public_WaterLibraryBP_h_28_INCLASS \
	FID_Dev_Unreal_Build55_Plugins_UnrealWaterLibrary_Source_WaterLibrary_Public_WaterLibraryBP_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATERLIBRARY_API UClass* StaticClass<class UWaterLibraryBP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_Unreal_Build55_Plugins_UnrealWaterLibrary_Source_WaterLibrary_Public_WaterLibraryBP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
