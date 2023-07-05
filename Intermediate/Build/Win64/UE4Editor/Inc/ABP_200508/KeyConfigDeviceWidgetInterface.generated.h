// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKeyMapSettingData;
enum class EKeyMappingType : uint8;
#ifdef ABP_200508_KeyConfigDeviceWidgetInterface_generated_h
#error "KeyConfigDeviceWidgetInterface.generated.h already included, missing '#pragma once' in KeyConfigDeviceWidgetInterface.h"
#endif
#define ABP_200508_KeyConfigDeviceWidgetInterface_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_RPC_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_EVENT_PARMS \
	struct KeyConfigDeviceWidgetInterface_eventChangeBaseGameMode_Parms \
	{ \
		bool Valid; \
	}; \
	struct KeyConfigDeviceWidgetInterface_eventChangeKeyMapLayout_Parms \
	{ \
		TArray<FKeyMapSettingData> _inKeyMapSettingData; \
	}; \
	struct KeyConfigDeviceWidgetInterface_eventSetSelectCursor_Parms \
	{ \
		EKeyMappingType _inKeyMapType; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKeyConfigDeviceWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeyConfigDeviceWidgetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeyConfigDeviceWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeyConfigDeviceWidgetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKeyConfigDeviceWidgetInterface(UKeyConfigDeviceWidgetInterface&&); \
	NO_API UKeyConfigDeviceWidgetInterface(const UKeyConfigDeviceWidgetInterface&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKeyConfigDeviceWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKeyConfigDeviceWidgetInterface(UKeyConfigDeviceWidgetInterface&&); \
	NO_API UKeyConfigDeviceWidgetInterface(const UKeyConfigDeviceWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeyConfigDeviceWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeyConfigDeviceWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeyConfigDeviceWidgetInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUKeyConfigDeviceWidgetInterface(); \
	friend struct Z_Construct_UClass_UKeyConfigDeviceWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UKeyConfigDeviceWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UKeyConfigDeviceWidgetInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IKeyConfigDeviceWidgetInterface() {} \
public: \
	typedef UKeyConfigDeviceWidgetInterface UClassType; \
	typedef IKeyConfigDeviceWidgetInterface ThisClass; \
	static void Execute_ChangeBaseGameMode(UObject* O, bool Valid); \
	static void Execute_ChangeKeyMapLayout(UObject* O, TArray<FKeyMapSettingData> const& _inKeyMapSettingData); \
	static void Execute_Initialize(UObject* O); \
	static void Execute_SetSelectCursor(UObject* O, EKeyMappingType _inKeyMapType); \
	static void Execute_UnSelectCursor(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IKeyConfigDeviceWidgetInterface() {} \
public: \
	typedef UKeyConfigDeviceWidgetInterface UClassType; \
	typedef IKeyConfigDeviceWidgetInterface ThisClass; \
	static void Execute_ChangeBaseGameMode(UObject* O, bool Valid); \
	static void Execute_ChangeKeyMapLayout(UObject* O, TArray<FKeyMapSettingData> const& _inKeyMapSettingData); \
	static void Execute_Initialize(UObject* O); \
	static void Execute_SetSelectCursor(UObject* O, EKeyMappingType _inKeyMapType); \
	static void Execute_UnSelectCursor(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_8_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UKeyConfigDeviceWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_KeyConfigDeviceWidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
