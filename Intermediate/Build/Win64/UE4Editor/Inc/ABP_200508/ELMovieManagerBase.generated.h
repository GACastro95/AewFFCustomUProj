// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UManaMovie;
enum class EManaComponentStatus : uint8;
struct FTimespan;
#ifdef ABP_200508_ELMovieManagerBase_generated_h
#error "ELMovieManagerBase.generated.h already included, missing '#pragma once' in ELMovieManagerBase.h"
#endif
#define ABP_200508_ELMovieManagerBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetManaMovie);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetManaMovie);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_EVENT_PARMS \
	struct ELMovieManagerBase_eventDestroy_Parms \
	{ \
		int32 MovieSlotID; \
	}; \
	struct ELMovieManagerBase_eventDestroyAlpha_Parms \
	{ \
		int32 MovieSlotID; \
	}; \
	struct ELMovieManagerBase_eventGetStatus_Parms \
	{ \
		bool IsAlphaMovie; \
		int32 MovieSlotID; \
		EManaComponentStatus Result; \
	}; \
	struct ELMovieManagerBase_eventPause_Parms \
	{ \
		int32 MovieSlotID; \
		bool StartPause; \
	}; \
	struct ELMovieManagerBase_eventPlay_Parms \
	{ \
		int32 MovieSlotID; \
		FName MovieDataIDName; \
		bool IsMovieLoop; \
		bool IsPlayableWhenPause; \
		bool IsDebug; \
		float TotalSecond; \
		float FadeInSecond; \
		float FadeOutSecond; \
	}; \
	struct ELMovieManagerBase_eventPlayAlpha_Parms \
	{ \
		int32 MovieSlotID; \
		FName MovieDataIDName; \
		bool IsMovieLoop; \
		bool IsPlayableWhenPause; \
		float TotalSecond; \
		float FadeInSecond; \
		float FadeOutSecond; \
	}; \
	struct ELMovieManagerBase_eventPlayMovie_Parms \
	{ \
		int32 MovieSlotID; \
		int32 MovieSlotIDAlpha; \
		FName MovieDataIDName; \
		bool IsMovieLoop; \
		bool IsPlayableWhenPause; \
		float TotalSecond; \
		bool IsAlpha; \
		float FadeInSecond; \
		float FadeOutSecond; \
	}; \
	struct ELMovieManagerBase_eventSeek_Parms \
	{ \
		int32 MovieSlotID; \
		FTimespan AddTime; \
		FName MovieDataIDName; \
		bool IsDebug; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELMovieManagerBase(); \
	friend struct Z_Construct_UClass_AELMovieManagerBase_Statics; \
public: \
	DECLARE_CLASS(AELMovieManagerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELMovieManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAELMovieManagerBase(); \
	friend struct Z_Construct_UClass_AELMovieManagerBase_Statics; \
public: \
	DECLARE_CLASS(AELMovieManagerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELMovieManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELMovieManagerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELMovieManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELMovieManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELMovieManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELMovieManagerBase(AELMovieManagerBase&&); \
	NO_API AELMovieManagerBase(const AELMovieManagerBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELMovieManagerBase(AELMovieManagerBase&&); \
	NO_API AELMovieManagerBase(const AELMovieManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELMovieManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELMovieManagerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELMovieManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELMovieManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELMovieManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
