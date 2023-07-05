// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDebugMenuRootBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDebugMenuRootBase() {}
// Cross Module References
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuRootBase_NoRegister();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuRootBase();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuUIBase();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FDebugMenuShortcutKeySettings();
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EYDebugMenuShortcutType();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuRootDefaultParam();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UYDebugMenuRootBase::execAddShortcut)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_GET_TARRAY_REF(FDebugMenuShortcutKeySettings,Z_Param_Out__cKey);
		P_GET_ENUM(EYDebugMenuShortcutType,Z_Param__eShortCutType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddShortcut(Z_Param__strRegistKey,Z_Param_Out__cKey,EYDebugMenuShortcutType(Z_Param__eShortCutType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execAddSubMenu)
	{
		P_GET_OBJECT(UYDebugMenuSubMenuBase,Z_Param__pcSubMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSubMenu(Z_Param__pcSubMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execAddSubRootMenu)
	{
		P_GET_OBJECT(UYDebugMenuRootBase,Z_Param__pcSubRootMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSubRootMenu(Z_Param__pcSubRootMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execCreateSubMenu)
	{
		P_GET_OBJECT_REF(UYDebugMenuSubMenuBase,Z_Param_Out__pcInst);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateSubMenu(Z_Param_Out__pcInst,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execCreateSubRootMenu)
	{
		P_GET_OBJECT_REF(UYDebugMenuRootBase,Z_Param_Out__pcInst);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateSubRootMenu(Z_Param_Out__pcInst,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execFindSimpleMenuUIRecursive)
	{
		P_GET_STRUCT_REF(FYDebugMenuSimpleUIParam,Z_Param_Out__rstSubRootMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindSimpleMenuUIRecursive(Z_Param_Out__rstSubRootMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execFindSubMenu)
	{
		P_GET_OBJECT_REF(UYDebugMenuSubMenuBase,Z_Param_Out__pcSubMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindSubMenu(Z_Param_Out__pcSubMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execFindSubRootMenu)
	{
		P_GET_OBJECT_REF(UYDebugMenuRootBase,Z_Param_Out__pcSubRootMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindSubRootMenu(Z_Param_Out__pcSubRootMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execGetMenuTitle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMenuTitle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execGetRegistKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRegistKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execIsGamePadFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGamePadFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execIsOpened)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpened();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execIsPressedShortcutKey)
	{
		P_GET_ENUM_REF(EYDebugMenuShortcutType,Z_Param_Out__reShortCutType);
		P_GET_OBJECT(APlayerController,Z_Param__pcPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPressedShortcutKey((EYDebugMenuShortcutType&)(Z_Param_Out__reShortCutType),Z_Param__pcPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execRemoveSubMenu)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSubMenu(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execRemoveSubRootMenu)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSubRootMenu(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execSetActive)
	{
		P_GET_UBOOL(Z_Param__bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param__bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execSetDefaultParam)
	{
		P_GET_STRUCT_REF(FYDebugMenuRootDefaultParam,Z_Param_Out__stParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultParam(Z_Param_Out__stParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execSetGamePadFocus)
	{
		P_GET_UBOOL(Z_Param__bGamePadFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGamePadFocus(Z_Param__bGamePadFocus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execSetMenuTitle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strMenuTitle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuTitle(Z_Param__strMenuTitle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execSetOpenFlag)
	{
		P_GET_UBOOL(Z_Param__bOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOpenFlag(Z_Param__bOpen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execSetParent)
	{
		P_GET_OBJECT(UYDebugMenuManager,Z_Param__pcDebugMenuManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParent(Z_Param__pcDebugMenuManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execSetParentRootMenu)
	{
		P_GET_OBJECT(UYDebugMenuRootBase,Z_Param__pcDebugMenuRootBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParentRootMenu(Z_Param__pcDebugMenuRootBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execSetRegistKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegistKey(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execSetShortcut)
	{
		P_GET_TARRAY_REF(FDebugMenuShortcutKeySettings,Z_Param_Out__cKey);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_GET_ENUM(EYDebugMenuShortcutType,Z_Param__eShortCutType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShortcut(Z_Param_Out__cKey,Z_Param__strRegistKey,EYDebugMenuShortcutType(Z_Param__eShortCutType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootBase::execUpdateSimpleMenuUIRecursive)
	{
		P_GET_STRUCT_REF(FYDebugMenuSimpleUIParam,Z_Param_Out__rstSubRootMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateSimpleMenuUIRecursive(Z_Param_Out__rstSubRootMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	void UYDebugMenuRootBase::StaticRegisterNativesUYDebugMenuRootBase()
	{
		UClass* Class = UYDebugMenuRootBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddShortcut", &UYDebugMenuRootBase::execAddShortcut },
			{ "AddSubMenu", &UYDebugMenuRootBase::execAddSubMenu },
			{ "AddSubRootMenu", &UYDebugMenuRootBase::execAddSubRootMenu },
			{ "CreateSubMenu", &UYDebugMenuRootBase::execCreateSubMenu },
			{ "CreateSubRootMenu", &UYDebugMenuRootBase::execCreateSubRootMenu },
			{ "FindSimpleMenuUIRecursive", &UYDebugMenuRootBase::execFindSimpleMenuUIRecursive },
			{ "FindSubMenu", &UYDebugMenuRootBase::execFindSubMenu },
			{ "FindSubRootMenu", &UYDebugMenuRootBase::execFindSubRootMenu },
			{ "GetMenuTitle", &UYDebugMenuRootBase::execGetMenuTitle },
			{ "GetRegistKey", &UYDebugMenuRootBase::execGetRegistKey },
			{ "IsActive", &UYDebugMenuRootBase::execIsActive },
			{ "IsGamePadFocus", &UYDebugMenuRootBase::execIsGamePadFocus },
			{ "IsOpened", &UYDebugMenuRootBase::execIsOpened },
			{ "IsPressedShortcutKey", &UYDebugMenuRootBase::execIsPressedShortcutKey },
			{ "RemoveSubMenu", &UYDebugMenuRootBase::execRemoveSubMenu },
			{ "RemoveSubRootMenu", &UYDebugMenuRootBase::execRemoveSubRootMenu },
			{ "SetActive", &UYDebugMenuRootBase::execSetActive },
			{ "SetDefaultParam", &UYDebugMenuRootBase::execSetDefaultParam },
			{ "SetGamePadFocus", &UYDebugMenuRootBase::execSetGamePadFocus },
			{ "SetMenuTitle", &UYDebugMenuRootBase::execSetMenuTitle },
			{ "SetOpenFlag", &UYDebugMenuRootBase::execSetOpenFlag },
			{ "SetParent", &UYDebugMenuRootBase::execSetParent },
			{ "SetParentRootMenu", &UYDebugMenuRootBase::execSetParentRootMenu },
			{ "SetRegistKey", &UYDebugMenuRootBase::execSetRegistKey },
			{ "SetShortcut", &UYDebugMenuRootBase::execSetShortcut },
			{ "UpdateSimpleMenuUIRecursive", &UYDebugMenuRootBase::execUpdateSimpleMenuUIRecursive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics
	{
		struct YDebugMenuRootBase_eventAddShortcut_Parms
		{
			FString _strRegistKey;
			TArray<FDebugMenuShortcutKeySettings> _cKey;
			EYDebugMenuShortcutType _eShortCutType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cKey_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cKey;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__eShortCutType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__eShortCutType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventAddShortcut_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__strRegistKey_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__cKey_Inner = { "_cKey", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDebugMenuShortcutKeySettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__cKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__cKey = { "_cKey", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventAddShortcut_Parms, _cKey), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__cKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__cKey_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__eShortCutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__eShortCutType = { "_eShortCutType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventAddShortcut_Parms, _eShortCutType), Z_Construct_UEnum_yDebug_EYDebugMenuShortcutType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__cKey_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__cKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__eShortCutType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::NewProp__eShortCutType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "AddShortcut", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventAddShortcut_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics
	{
		struct YDebugMenuRootBase_eventAddSubMenu_Parms
		{
			UYDebugMenuSubMenuBase* _pcSubMenu;
			FString _strRegistKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSubMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::NewProp__pcSubMenu = { "_pcSubMenu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventAddSubMenu_Parms, _pcSubMenu), Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventAddSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventAddSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventAddSubMenu_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::NewProp__pcSubMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "AddSubMenu", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventAddSubMenu_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics
	{
		struct YDebugMenuRootBase_eventAddSubRootMenu_Parms
		{
			UYDebugMenuRootBase* _pcSubRootMenu;
			FString _strRegistKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSubRootMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::NewProp__pcSubRootMenu = { "_pcSubRootMenu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventAddSubRootMenu_Parms, _pcSubRootMenu), Z_Construct_UClass_UYDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventAddSubRootMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventAddSubRootMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventAddSubRootMenu_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::NewProp__pcSubRootMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "AddSubRootMenu", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventAddSubRootMenu_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics
	{
		struct YDebugMenuRootBase_eventCreateSubMenu_Parms
		{
			UYDebugMenuSubMenuBase* _pcInst;
			FString _strRegistKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventCreateSubMenu_Parms, _pcInst), Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventCreateSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventCreateSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventCreateSubMenu_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "CreateSubMenu", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventCreateSubMenu_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics
	{
		struct YDebugMenuRootBase_eventCreateSubRootMenu_Parms
		{
			UYDebugMenuRootBase* _pcInst;
			FString _strRegistKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventCreateSubRootMenu_Parms, _pcInst), Z_Construct_UClass_UYDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventCreateSubRootMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventCreateSubRootMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventCreateSubRootMenu_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "CreateSubRootMenu", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventCreateSubRootMenu_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics
	{
		struct YDebugMenuRootBase_eventFindSimpleMenuUIRecursive_Parms
		{
			FYDebugMenuSimpleUIParam _rstSubRootMenu;
			FString _strRegistKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstSubRootMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu = { "_rstSubRootMenu", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventFindSimpleMenuUIRecursive_Parms, _rstSubRootMenu), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventFindSimpleMenuUIRecursive_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventFindSimpleMenuUIRecursive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventFindSimpleMenuUIRecursive_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "FindSimpleMenuUIRecursive", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventFindSimpleMenuUIRecursive_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics
	{
		struct YDebugMenuRootBase_eventFindSubMenu_Parms
		{
			UYDebugMenuSubMenuBase* _pcSubMenu;
			FString _strRegistKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSubMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::NewProp__pcSubMenu = { "_pcSubMenu", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventFindSubMenu_Parms, _pcSubMenu), Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventFindSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventFindSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventFindSubMenu_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::NewProp__pcSubMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "FindSubMenu", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventFindSubMenu_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics
	{
		struct YDebugMenuRootBase_eventFindSubRootMenu_Parms
		{
			UYDebugMenuRootBase* _pcSubRootMenu;
			FString _strRegistKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSubRootMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::NewProp__pcSubRootMenu = { "_pcSubRootMenu", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventFindSubRootMenu_Parms, _pcSubRootMenu), Z_Construct_UClass_UYDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventFindSubRootMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventFindSubRootMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventFindSubRootMenu_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::NewProp__pcSubRootMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "FindSubRootMenu", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventFindSubRootMenu_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_GetMenuTitle_Statics
	{
		struct YDebugMenuRootBase_eventGetMenuTitle_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_GetMenuTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventGetMenuTitle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_GetMenuTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_GetMenuTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_GetMenuTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_GetMenuTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "GetMenuTitle", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventGetMenuTitle_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_GetMenuTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_GetMenuTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_GetMenuTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_GetMenuTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_GetMenuTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_GetMenuTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_GetRegistKey_Statics
	{
		struct YDebugMenuRootBase_eventGetRegistKey_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_GetRegistKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventGetRegistKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_GetRegistKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_GetRegistKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_GetRegistKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_GetRegistKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "GetRegistKey", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventGetRegistKey_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_GetRegistKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_GetRegistKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_GetRegistKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_GetRegistKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_GetRegistKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_GetRegistKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_IsActive_Statics
	{
		struct YDebugMenuRootBase_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuRootBase_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventIsActive_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "IsActive", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventIsActive_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus_Statics
	{
		struct YDebugMenuRootBase_eventIsGamePadFocus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventIsGamePadFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventIsGamePadFocus_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "IsGamePadFocus", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventIsGamePadFocus_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened_Statics
	{
		struct YDebugMenuRootBase_eventIsOpened_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventIsOpened_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventIsOpened_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "IsOpened", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventIsOpened_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics
	{
		struct YDebugMenuRootBase_eventIsPressedShortcutKey_Parms
		{
			EYDebugMenuShortcutType _reShortCutType;
			APlayerController* _pcPlayerController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__reShortCutType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__reShortCutType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp__reShortCutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp__reShortCutType = { "_reShortCutType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventIsPressedShortcutKey_Parms, _reShortCutType), Z_Construct_UEnum_yDebug_EYDebugMenuShortcutType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp__pcPlayerController = { "_pcPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventIsPressedShortcutKey_Parms, _pcPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventIsPressedShortcutKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventIsPressedShortcutKey_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp__reShortCutType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp__reShortCutType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp__pcPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "IsPressedShortcutKey", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventIsPressedShortcutKey_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics
	{
		struct YDebugMenuRootBase_eventRemoveSubMenu_Parms
		{
			FString _strRegistKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventRemoveSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventRemoveSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventRemoveSubMenu_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "RemoveSubMenu", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventRemoveSubMenu_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics
	{
		struct YDebugMenuRootBase_eventRemoveSubRootMenu_Parms
		{
			FString _strRegistKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventRemoveSubRootMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventRemoveSubRootMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventRemoveSubRootMenu_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "RemoveSubRootMenu", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventRemoveSubRootMenu_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_SetActive_Statics
	{
		struct YDebugMenuRootBase_eventSetActive_Parms
		{
			bool _bActive;
		};
		static void NewProp__bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuRootBase_SetActive_Statics::NewProp__bActive_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventSetActive_Parms*)Obj)->_bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_SetActive_Statics::NewProp__bActive = { "_bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventSetActive_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_SetActive_Statics::NewProp__bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_SetActive_Statics::NewProp__bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_SetActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "SetActive", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventSetActive_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam_Statics
	{
		struct YDebugMenuRootBase_eventSetDefaultParam_Parms
		{
			FYDebugMenuRootDefaultParam _stParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam_Statics::NewProp__stParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam_Statics::NewProp__stParam = { "_stParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventSetDefaultParam_Parms, _stParam), Z_Construct_UScriptStruct_FYDebugMenuRootDefaultParam, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam_Statics::NewProp__stParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam_Statics::NewProp__stParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam_Statics::NewProp__stParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "SetDefaultParam", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventSetDefaultParam_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus_Statics
	{
		struct YDebugMenuRootBase_eventSetGamePadFocus_Parms
		{
			bool _bGamePadFocus;
		};
		static void NewProp__bGamePadFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bGamePadFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus_Statics::NewProp__bGamePadFocus_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventSetGamePadFocus_Parms*)Obj)->_bGamePadFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus_Statics::NewProp__bGamePadFocus = { "_bGamePadFocus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventSetGamePadFocus_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus_Statics::NewProp__bGamePadFocus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus_Statics::NewProp__bGamePadFocus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "SetGamePadFocus", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventSetGamePadFocus_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle_Statics
	{
		struct YDebugMenuRootBase_eventSetMenuTitle_Parms
		{
			FString _strMenuTitle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strMenuTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strMenuTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle_Statics::NewProp__strMenuTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle_Statics::NewProp__strMenuTitle = { "_strMenuTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventSetMenuTitle_Parms, _strMenuTitle), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle_Statics::NewProp__strMenuTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle_Statics::NewProp__strMenuTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle_Statics::NewProp__strMenuTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "SetMenuTitle", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventSetMenuTitle_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag_Statics
	{
		struct YDebugMenuRootBase_eventSetOpenFlag_Parms
		{
			bool _bOpen;
		};
		static void NewProp__bOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag_Statics::NewProp__bOpen_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventSetOpenFlag_Parms*)Obj)->_bOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag_Statics::NewProp__bOpen = { "_bOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventSetOpenFlag_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag_Statics::NewProp__bOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag_Statics::NewProp__bOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "SetOpenFlag", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventSetOpenFlag_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_SetParent_Statics
	{
		struct YDebugMenuRootBase_eventSetParent_Parms
		{
			UYDebugMenuManager* _pcDebugMenuManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcDebugMenuManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_SetParent_Statics::NewProp__pcDebugMenuManager = { "_pcDebugMenuManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventSetParent_Parms, _pcDebugMenuManager), Z_Construct_UClass_UYDebugMenuManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_SetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_SetParent_Statics::NewProp__pcDebugMenuManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_SetParent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_SetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "SetParent", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventSetParent_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_SetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_SetParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_SetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_SetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_SetParentRootMenu_Statics
	{
		struct YDebugMenuRootBase_eventSetParentRootMenu_Parms
		{
			UYDebugMenuRootBase* _pcDebugMenuRootBase;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcDebugMenuRootBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_SetParentRootMenu_Statics::NewProp__pcDebugMenuRootBase = { "_pcDebugMenuRootBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventSetParentRootMenu_Parms, _pcDebugMenuRootBase), Z_Construct_UClass_UYDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_SetParentRootMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_SetParentRootMenu_Statics::NewProp__pcDebugMenuRootBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_SetParentRootMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_SetParentRootMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "SetParentRootMenu", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventSetParentRootMenu_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_SetParentRootMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetParentRootMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_SetParentRootMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetParentRootMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_SetParentRootMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_SetParentRootMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey_Statics
	{
		struct YDebugMenuRootBase_eventSetRegistKey_Parms
		{
			FString _strRegistKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventSetRegistKey_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey_Statics::NewProp__strRegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey_Statics::NewProp__strRegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "SetRegistKey", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventSetRegistKey_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics
	{
		struct YDebugMenuRootBase_eventSetShortcut_Parms
		{
			TArray<FDebugMenuShortcutKeySettings> _cKey;
			FString _strRegistKey;
			EYDebugMenuShortcutType _eShortCutType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cKey_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__eShortCutType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__eShortCutType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__cKey_Inner = { "_cKey", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDebugMenuShortcutKeySettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__cKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__cKey = { "_cKey", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventSetShortcut_Parms, _cKey), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__cKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__cKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventSetShortcut_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__strRegistKey_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__eShortCutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__eShortCutType = { "_eShortCutType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventSetShortcut_Parms, _eShortCutType), Z_Construct_UEnum_yDebug_EYDebugMenuShortcutType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__cKey_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__cKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__eShortCutType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::NewProp__eShortCutType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "SetShortcut", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventSetShortcut_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics
	{
		struct YDebugMenuRootBase_eventUpdateSimpleMenuUIRecursive_Parms
		{
			FYDebugMenuSimpleUIParam _rstSubRootMenu;
			FString _strRegistKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rstSubRootMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstSubRootMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu = { "_rstSubRootMenu", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventUpdateSimpleMenuUIRecursive_Parms, _rstSubRootMenu), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootBase_eventUpdateSimpleMenuUIRecursive_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootBase_eventUpdateSimpleMenuUIRecursive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootBase_eventUpdateSimpleMenuUIRecursive_Parms), &Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootBase, nullptr, "UpdateSimpleMenuUIRecursive", nullptr, nullptr, sizeof(YDebugMenuRootBase_eventUpdateSimpleMenuUIRecursive_Parms), Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYDebugMenuRootBase_NoRegister()
	{
		return UYDebugMenuRootBase::StaticClass();
	}
	struct Z_Construct_UClass_UYDebugMenuRootBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_m_cSubRootMenus_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cSubRootMenus_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cSubRootMenus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cSubRootMenus;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_m_cSubMenus_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cSubMenus_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cSubMenus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cSubMenus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cRefParentManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_m_cRefParentManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cRefParentRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_m_cRefParentRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYDebugMenuRootBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYDebugMenuUIBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYDebugMenuRootBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_AddShortcut, "AddShortcut" }, // 1883067221
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_AddSubMenu, "AddSubMenu" }, // 3418372101
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_AddSubRootMenu, "AddSubRootMenu" }, // 2056698998
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubMenu, "CreateSubMenu" }, // 489187454
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_CreateSubRootMenu, "CreateSubRootMenu" }, // 2621555119
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_FindSimpleMenuUIRecursive, "FindSimpleMenuUIRecursive" }, // 1305749111
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_FindSubMenu, "FindSubMenu" }, // 3697229425
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_FindSubRootMenu, "FindSubRootMenu" }, // 340596516
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_GetMenuTitle, "GetMenuTitle" }, // 2916171950
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_GetRegistKey, "GetRegistKey" }, // 1264804156
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_IsActive, "IsActive" }, // 1723992958
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_IsGamePadFocus, "IsGamePadFocus" }, // 1790742199
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_IsOpened, "IsOpened" }, // 2214409193
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_IsPressedShortcutKey, "IsPressedShortcutKey" }, // 3454597448
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubMenu, "RemoveSubMenu" }, // 3635242510
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_RemoveSubRootMenu, "RemoveSubRootMenu" }, // 2932861466
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_SetActive, "SetActive" }, // 90912957
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_SetDefaultParam, "SetDefaultParam" }, // 2540873518
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_SetGamePadFocus, "SetGamePadFocus" }, // 2437104092
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_SetMenuTitle, "SetMenuTitle" }, // 1889266082
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_SetOpenFlag, "SetOpenFlag" }, // 382630689
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_SetParent, "SetParent" }, // 936394324
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_SetParentRootMenu, "SetParentRootMenu" }, // 1306837713
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_SetRegistKey, "SetRegistKey" }, // 2107540788
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_SetShortcut, "SetShortcut" }, // 155422605
		{ &Z_Construct_UFunction_UYDebugMenuRootBase_UpdateSimpleMenuUIRecursive, "UpdateSimpleMenuUIRecursive" }, // 1766292617
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuRootBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YDebugMenuRootBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus_ValueProp = { "m_cSubRootMenus", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UYDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus_Key_KeyProp = { "m_cSubRootMenus_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuRootBase" },
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus = { "m_cSubRootMenus", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuRootBase, m_cSubRootMenus), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubMenus_ValueProp = { "m_cSubMenus", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubMenus_Key_KeyProp = { "m_cSubMenus_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubMenus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuRootBase" },
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubMenus = { "m_cSubMenus", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuRootBase, m_cSubMenus), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubMenus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubMenus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cRefParentManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuRootBase" },
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cRefParentManager = { "m_cRefParentManager", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuRootBase, m_cRefParentManager), Z_Construct_UClass_UYDebugMenuManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cRefParentManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cRefParentManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cRefParentRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuRootBase" },
		{ "ModuleRelativePath", "Public/YDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cRefParentRoot = { "m_cRefParentRoot", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuRootBase, m_cRefParentRoot), Z_Construct_UClass_UYDebugMenuRootBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cRefParentRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cRefParentRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYDebugMenuRootBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubMenus_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubMenus_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cSubMenus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cRefParentManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuRootBase_Statics::NewProp_m_cRefParentRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYDebugMenuRootBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYDebugMenuRootBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYDebugMenuRootBase_Statics::ClassParams = {
		&UYDebugMenuRootBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYDebugMenuRootBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuRootBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuRootBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuRootBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYDebugMenuRootBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYDebugMenuRootBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYDebugMenuRootBase, 2149341348);
	template<> YDEBUG_API UClass* StaticClass<UYDebugMenuRootBase>()
	{
		return UYDebugMenuRootBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYDebugMenuRootBase(Z_Construct_UClass_UYDebugMenuRootBase, &UYDebugMenuRootBase::StaticClass, TEXT("/Script/yDebug"), TEXT("UYDebugMenuRootBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYDebugMenuRootBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
