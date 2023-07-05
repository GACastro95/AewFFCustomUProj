// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AActor;
class UObject;
#ifdef SORTPLUGIN_SortPluginBPLibrary_generated_h
#error "SortPluginBPLibrary.generated.h already included, missing '#pragma once' in SortPluginBPLibrary.h"
#endif
#define SORTPLUGIN_SortPluginBPLibrary_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_SPARSE_DATA
#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAverageFloat); \
	DECLARE_FUNCTION(execAverageInteger); \
	DECLARE_FUNCTION(execClampFloat); \
	DECLARE_FUNCTION(execClampFloatRef); \
	DECLARE_FUNCTION(execClampInteger); \
	DECLARE_FUNCTION(execClampIntegerRef); \
	DECLARE_FUNCTION(execClampVectorSize); \
	DECLARE_FUNCTION(execClampVectorSizeRef); \
	DECLARE_FUNCTION(execClosestActor); \
	DECLARE_FUNCTION(execClosestLocation); \
	DECLARE_FUNCTION(execExtractActor); \
	DECLARE_FUNCTION(execExtractFloat); \
	DECLARE_FUNCTION(execExtractInteger); \
	DECLARE_FUNCTION(execExtractName); \
	DECLARE_FUNCTION(execExtractObject); \
	DECLARE_FUNCTION(execExtractString); \
	DECLARE_FUNCTION(execExtractVector); \
	DECLARE_FUNCTION(execFarthestActor); \
	DECLARE_FUNCTION(execFarthestLocation); \
	DECLARE_FUNCTION(execFilterMatch); \
	DECLARE_FUNCTION(execFilterMatches); \
	DECLARE_FUNCTION(execMaximumFloatIndex); \
	DECLARE_FUNCTION(execMaximumIntegerIndex); \
	DECLARE_FUNCTION(execMinimumFloatIndex); \
	DECLARE_FUNCTION(execMinimumIntegerIndex); \
	DECLARE_FUNCTION(execMinMaxFloatNormalization); \
	DECLARE_FUNCTION(execMinMaxIntegerNormalization); \
	DECLARE_FUNCTION(execPredicateFilterActor); \
	DECLARE_FUNCTION(execPredicateFilterFloat); \
	DECLARE_FUNCTION(execPredicateFilterInteger); \
	DECLARE_FUNCTION(execPredicateFilterName); \
	DECLARE_FUNCTION(execPredicateFilterObject); \
	DECLARE_FUNCTION(execPredicateFilterString); \
	DECLARE_FUNCTION(execPredicateFilterVector); \
	DECLARE_FUNCTION(execPredicateSortActor); \
	DECLARE_FUNCTION(execPredicateSortActorRef); \
	DECLARE_FUNCTION(execPredicateSortFloat); \
	DECLARE_FUNCTION(execPredicateSortFloatRef); \
	DECLARE_FUNCTION(execPredicateSortInteger); \
	DECLARE_FUNCTION(execPredicateSortIntegerRef); \
	DECLARE_FUNCTION(execPredicateSortName); \
	DECLARE_FUNCTION(execPredicateSortNameRef); \
	DECLARE_FUNCTION(execPredicateSortObject); \
	DECLARE_FUNCTION(execPredicateSortObjectRef); \
	DECLARE_FUNCTION(execPredicateSortString); \
	DECLARE_FUNCTION(execPredicateSortStringRef); \
	DECLARE_FUNCTION(execPredicateSortVector); \
	DECLARE_FUNCTION(execPredicateSortVectorRef); \
	DECLARE_FUNCTION(execRandomFloat); \
	DECLARE_FUNCTION(execRandomInteger); \
	DECLARE_FUNCTION(execRandomVector); \
	DECLARE_FUNCTION(execReverseActor); \
	DECLARE_FUNCTION(execReverseFloat); \
	DECLARE_FUNCTION(execReverseInteger); \
	DECLARE_FUNCTION(execReverseName); \
	DECLARE_FUNCTION(execReverseObject); \
	DECLARE_FUNCTION(execReverseString); \
	DECLARE_FUNCTION(execReverseVector); \
	DECLARE_FUNCTION(execSortActor); \
	DECLARE_FUNCTION(execSortActorRef); \
	DECLARE_FUNCTION(execSortFloat); \
	DECLARE_FUNCTION(execSortFloatRef); \
	DECLARE_FUNCTION(execSortInteger); \
	DECLARE_FUNCTION(execSortIntegerRef); \
	DECLARE_FUNCTION(execSortName); \
	DECLARE_FUNCTION(execSortNameRef); \
	DECLARE_FUNCTION(execSortString); \
	DECLARE_FUNCTION(execSortStringRef); \
	DECLARE_FUNCTION(execSortVector); \
	DECLARE_FUNCTION(execSortVectorRef); \
	DECLARE_FUNCTION(execSplitString); \
	DECLARE_FUNCTION(execToActorSet); \
	DECLARE_FUNCTION(execToFloatSet); \
	DECLARE_FUNCTION(execToIntegerSet); \
	DECLARE_FUNCTION(execToNameSet); \
	DECLARE_FUNCTION(execToObjectSet); \
	DECLARE_FUNCTION(execToStringSet); \
	DECLARE_FUNCTION(execToVectorSet);


#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAverageFloat); \
	DECLARE_FUNCTION(execAverageInteger); \
	DECLARE_FUNCTION(execClampFloat); \
	DECLARE_FUNCTION(execClampFloatRef); \
	DECLARE_FUNCTION(execClampInteger); \
	DECLARE_FUNCTION(execClampIntegerRef); \
	DECLARE_FUNCTION(execClampVectorSize); \
	DECLARE_FUNCTION(execClampVectorSizeRef); \
	DECLARE_FUNCTION(execClosestActor); \
	DECLARE_FUNCTION(execClosestLocation); \
	DECLARE_FUNCTION(execExtractActor); \
	DECLARE_FUNCTION(execExtractFloat); \
	DECLARE_FUNCTION(execExtractInteger); \
	DECLARE_FUNCTION(execExtractName); \
	DECLARE_FUNCTION(execExtractObject); \
	DECLARE_FUNCTION(execExtractString); \
	DECLARE_FUNCTION(execExtractVector); \
	DECLARE_FUNCTION(execFarthestActor); \
	DECLARE_FUNCTION(execFarthestLocation); \
	DECLARE_FUNCTION(execFilterMatch); \
	DECLARE_FUNCTION(execFilterMatches); \
	DECLARE_FUNCTION(execMaximumFloatIndex); \
	DECLARE_FUNCTION(execMaximumIntegerIndex); \
	DECLARE_FUNCTION(execMinimumFloatIndex); \
	DECLARE_FUNCTION(execMinimumIntegerIndex); \
	DECLARE_FUNCTION(execMinMaxFloatNormalization); \
	DECLARE_FUNCTION(execMinMaxIntegerNormalization); \
	DECLARE_FUNCTION(execPredicateFilterActor); \
	DECLARE_FUNCTION(execPredicateFilterFloat); \
	DECLARE_FUNCTION(execPredicateFilterInteger); \
	DECLARE_FUNCTION(execPredicateFilterName); \
	DECLARE_FUNCTION(execPredicateFilterObject); \
	DECLARE_FUNCTION(execPredicateFilterString); \
	DECLARE_FUNCTION(execPredicateFilterVector); \
	DECLARE_FUNCTION(execPredicateSortActor); \
	DECLARE_FUNCTION(execPredicateSortActorRef); \
	DECLARE_FUNCTION(execPredicateSortFloat); \
	DECLARE_FUNCTION(execPredicateSortFloatRef); \
	DECLARE_FUNCTION(execPredicateSortInteger); \
	DECLARE_FUNCTION(execPredicateSortIntegerRef); \
	DECLARE_FUNCTION(execPredicateSortName); \
	DECLARE_FUNCTION(execPredicateSortNameRef); \
	DECLARE_FUNCTION(execPredicateSortObject); \
	DECLARE_FUNCTION(execPredicateSortObjectRef); \
	DECLARE_FUNCTION(execPredicateSortString); \
	DECLARE_FUNCTION(execPredicateSortStringRef); \
	DECLARE_FUNCTION(execPredicateSortVector); \
	DECLARE_FUNCTION(execPredicateSortVectorRef); \
	DECLARE_FUNCTION(execRandomFloat); \
	DECLARE_FUNCTION(execRandomInteger); \
	DECLARE_FUNCTION(execRandomVector); \
	DECLARE_FUNCTION(execReverseActor); \
	DECLARE_FUNCTION(execReverseFloat); \
	DECLARE_FUNCTION(execReverseInteger); \
	DECLARE_FUNCTION(execReverseName); \
	DECLARE_FUNCTION(execReverseObject); \
	DECLARE_FUNCTION(execReverseString); \
	DECLARE_FUNCTION(execReverseVector); \
	DECLARE_FUNCTION(execSortActor); \
	DECLARE_FUNCTION(execSortActorRef); \
	DECLARE_FUNCTION(execSortFloat); \
	DECLARE_FUNCTION(execSortFloatRef); \
	DECLARE_FUNCTION(execSortInteger); \
	DECLARE_FUNCTION(execSortIntegerRef); \
	DECLARE_FUNCTION(execSortName); \
	DECLARE_FUNCTION(execSortNameRef); \
	DECLARE_FUNCTION(execSortString); \
	DECLARE_FUNCTION(execSortStringRef); \
	DECLARE_FUNCTION(execSortVector); \
	DECLARE_FUNCTION(execSortVectorRef); \
	DECLARE_FUNCTION(execSplitString); \
	DECLARE_FUNCTION(execToActorSet); \
	DECLARE_FUNCTION(execToFloatSet); \
	DECLARE_FUNCTION(execToIntegerSet); \
	DECLARE_FUNCTION(execToNameSet); \
	DECLARE_FUNCTION(execToObjectSet); \
	DECLARE_FUNCTION(execToStringSet); \
	DECLARE_FUNCTION(execToVectorSet);


#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSortPluginBPLibrary(); \
	friend struct Z_Construct_UClass_USortPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USortPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SortPlugin"), NO_API) \
	DECLARE_SERIALIZER(USortPluginBPLibrary)


#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUSortPluginBPLibrary(); \
	friend struct Z_Construct_UClass_USortPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USortPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SortPlugin"), NO_API) \
	DECLARE_SERIALIZER(USortPluginBPLibrary)


#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USortPluginBPLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USortPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USortPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USortPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USortPluginBPLibrary(USortPluginBPLibrary&&); \
	NO_API USortPluginBPLibrary(const USortPluginBPLibrary&); \
public:


#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USortPluginBPLibrary(USortPluginBPLibrary&&); \
	NO_API USortPluginBPLibrary(const USortPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USortPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USortPluginBPLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USortPluginBPLibrary)


#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_25_PROLOG
#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_SPARSE_DATA \
	AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_INCLASS \
	AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_SPARSE_DATA \
	AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SORTPLUGIN_API UClass* StaticClass<class USortPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_SortPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
