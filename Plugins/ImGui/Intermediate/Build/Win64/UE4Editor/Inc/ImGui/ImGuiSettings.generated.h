// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IMGUI_ImGuiSettings_generated_h
#error "ImGuiSettings.generated.h already included, missing '#pragma once' in ImGuiSettings.h"
#endif
#define IMGUI_ImGuiSettings_generated_h

#define AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_SPARSE_DATA
#define AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_RPC_WRAPPERS
#define AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImGuiSettings(); \
	friend struct Z_Construct_UClass_UImGuiSettings_Statics; \
public: \
	DECLARE_CLASS(UImGuiSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImGui"), NO_API) \
	DECLARE_SERIALIZER(UImGuiSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("ImGui");} \



#define AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUImGuiSettings(); \
	friend struct Z_Construct_UClass_UImGuiSettings_Statics; \
public: \
	DECLARE_CLASS(UImGuiSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImGui"), NO_API) \
	DECLARE_SERIALIZER(UImGuiSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("ImGui");} \



#define AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImGuiSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImGuiSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImGuiSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImGuiSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImGuiSettings(UImGuiSettings&&); \
	NO_API UImGuiSettings(const UImGuiSettings&); \
public:


#define AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImGuiSettings(UImGuiSettings&&); \
	NO_API UImGuiSettings(const UImGuiSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImGuiSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImGuiSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UImGuiSettings)


#define AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ImGuiInputHandlerClass() { return STRUCT_OFFSET(UImGuiSettings, ImGuiInputHandlerClass); } \
	FORCEINLINE static uint32 __PPO__bShareKeyboardInput() { return STRUCT_OFFSET(UImGuiSettings, bShareKeyboardInput); } \
	FORCEINLINE static uint32 __PPO__bShareGamepadInput() { return STRUCT_OFFSET(UImGuiSettings, bShareGamepadInput); } \
	FORCEINLINE static uint32 __PPO__bShareMouseInput() { return STRUCT_OFFSET(UImGuiSettings, bShareMouseInput); } \
	FORCEINLINE static uint32 __PPO__bUseSoftwareCursor() { return STRUCT_OFFSET(UImGuiSettings, bUseSoftwareCursor); } \
	FORCEINLINE static uint32 __PPO__ToggleInput() { return STRUCT_OFFSET(UImGuiSettings, ToggleInput); } \
	FORCEINLINE static uint32 __PPO__CanvasSize() { return STRUCT_OFFSET(UImGuiSettings, CanvasSize); } \
	FORCEINLINE static uint32 __PPO__DPIScale() { return STRUCT_OFFSET(UImGuiSettings, DPIScale); }


#define AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_10_PROLOG
#define AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_INCLASS \
	AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMGUI_API UClass* StaticClass<class UImGuiSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_ImGui_Source_ImGui_Public_ImGuiSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
