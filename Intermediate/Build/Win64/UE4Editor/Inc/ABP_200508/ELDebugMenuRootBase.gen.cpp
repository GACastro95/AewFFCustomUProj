// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDebugMenuRootBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDebugMenuRootBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuUIBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELDebugMenuShortcutType();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELDebugMenuRootBase::execAddShortcut)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_GET_TARRAY_REF(FELDebugMenuShortcutKeySettings,Z_Param_Out__cKeys);
		P_GET_ENUM(EELDebugMenuShortcutType,Z_Param__eShortCutType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddShortcut(Z_Param__strRegistKey,Z_Param_Out__cKeys,EELDebugMenuShortcutType(Z_Param__eShortCutType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execAddSubMenu)
	{
		P_GET_OBJECT(UELDebugMenuSubMenuBase,Z_Param__pcSubMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSubMenu(Z_Param__pcSubMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execAddSubRootMenu)
	{
		P_GET_OBJECT(UELDebugMenuRootBase,Z_Param__pcSubRootMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSubRootMenu(Z_Param__pcSubRootMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execBindActionCore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindActionCore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execBindChangedOpenFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindChangedOpenFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execBindDrawCore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindDrawCore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execCreateSubMenu)
	{
		P_GET_OBJECT_REF(UELDebugMenuSubMenuBase,Z_Param_Out__pcInst);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateSubMenu(Z_Param_Out__pcInst,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execCreateSubRootMenu)
	{
		P_GET_OBJECT_REF(UELDebugMenuRootBase,Z_Param_Out__pcInst);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateSubRootMenu(Z_Param_Out__pcInst,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execFindSimpleMenuUIRecursive)
	{
		P_GET_STRUCT_REF(FELDebugMenuSimpleUIParam,Z_Param_Out__rststParam);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindSimpleMenuUIRecursive(Z_Param_Out__rststParam,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execFindSubMenu)
	{
		P_GET_OBJECT_REF(UELDebugMenuSubMenuBase,Z_Param_Out__pcSubMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindSubMenu(Z_Param_Out__pcSubMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execFindSubRootMenu)
	{
		P_GET_OBJECT_REF(UELDebugMenuRootBase,Z_Param_Out__pcSubRootMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindSubRootMenu(Z_Param_Out__pcSubRootMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execGetMenuTitle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMenuTitle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execGetRegistKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRegistKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execInitDebugMenuRootBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitDebugMenuRootBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execIsGamePadFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGamePadFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execIsOpened)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpened();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execIsPressedShortcutKey)
	{
		P_GET_ENUM_REF(EELDebugMenuShortcutType,Z_Param_Out__reShortCutType);
		P_GET_OBJECT(APlayerController,Z_Param__pcPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPressedShortcutKey((EELDebugMenuShortcutType&)(Z_Param_Out__reShortCutType),Z_Param__pcPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execRemoveSubMenu)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSubMenu(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execRemoveSubRootMenu)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSubRootMenu(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execSetActive)
	{
		P_GET_UBOOL(Z_Param__bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param__bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execSetDefaultParam)
	{
		P_GET_STRUCT_REF(FELDebugMenuRootDefaultParam,Z_Param_Out__stParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultParam(Z_Param_Out__stParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execSetGamePadFocus)
	{
		P_GET_UBOOL(Z_Param__bGamePadFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGamePadFocus(Z_Param__bGamePadFocus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execSetMenuTitle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strMenuTitle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuTitle(Z_Param__strMenuTitle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execSetOpenFlag)
	{
		P_GET_UBOOL(Z_Param__bOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOpenFlag(Z_Param__bOpen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execSetParent)
	{
		P_GET_OBJECT(UELDebugMenuManager,Z_Param__pcDebugMenuManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParent(Z_Param__pcDebugMenuManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execSetParentRootMenu)
	{
		P_GET_OBJECT(UELDebugMenuRootBase,Z_Param__pcDebugMenuRootBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParentRootMenu(Z_Param__pcDebugMenuRootBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execSetRegistKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegistKey(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execSetShortcut)
	{
		P_GET_TARRAY_REF(FELDebugMenuShortcutKeySettings,Z_Param_Out__cKeys);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_GET_ENUM(EELDebugMenuShortcutType,Z_Param__eShortCutType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShortcut(Z_Param_Out__cKeys,Z_Param__strRegistKey,EELDebugMenuShortcutType(Z_Param__eShortCutType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuRootBase::execUpdateSimpleMenuUIRecursive)
	{
		P_GET_STRUCT_REF(FELDebugMenuSimpleUIParam,Z_Param_Out__rstParam);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateSimpleMenuUIRecursive(Z_Param_Out__rstParam,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	void UELDebugMenuRootBase::StaticRegisterNativesUELDebugMenuRootBase()
	{
		UClass* Class = UELDebugMenuRootBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddShortcut", &UELDebugMenuRootBase::execAddShortcut },
			{ "AddSubMenu", &UELDebugMenuRootBase::execAddSubMenu },
			{ "AddSubRootMenu", &UELDebugMenuRootBase::execAddSubRootMenu },
			{ "BindActionCore", &UELDebugMenuRootBase::execBindActionCore },
			{ "BindChangedOpenFlag", &UELDebugMenuRootBase::execBindChangedOpenFlag },
			{ "BindDrawCore", &UELDebugMenuRootBase::execBindDrawCore },
			{ "CreateSubMenu", &UELDebugMenuRootBase::execCreateSubMenu },
			{ "CreateSubRootMenu", &UELDebugMenuRootBase::execCreateSubRootMenu },
			{ "FindSimpleMenuUIRecursive", &UELDebugMenuRootBase::execFindSimpleMenuUIRecursive },
			{ "FindSubMenu", &UELDebugMenuRootBase::execFindSubMenu },
			{ "FindSubRootMenu", &UELDebugMenuRootBase::execFindSubRootMenu },
			{ "GetMenuTitle", &UELDebugMenuRootBase::execGetMenuTitle },
			{ "GetRegistKey", &UELDebugMenuRootBase::execGetRegistKey },
			{ "InitDebugMenuRootBase", &UELDebugMenuRootBase::execInitDebugMenuRootBase },
			{ "IsActive", &UELDebugMenuRootBase::execIsActive },
			{ "IsGamePadFocus", &UELDebugMenuRootBase::execIsGamePadFocus },
			{ "IsOpened", &UELDebugMenuRootBase::execIsOpened },
			{ "IsPressedShortcutKey", &UELDebugMenuRootBase::execIsPressedShortcutKey },
			{ "RemoveSubMenu", &UELDebugMenuRootBase::execRemoveSubMenu },
			{ "RemoveSubRootMenu", &UELDebugMenuRootBase::execRemoveSubRootMenu },
			{ "SetActive", &UELDebugMenuRootBase::execSetActive },
			{ "SetDefaultParam", &UELDebugMenuRootBase::execSetDefaultParam },
			{ "SetGamePadFocus", &UELDebugMenuRootBase::execSetGamePadFocus },
			{ "SetMenuTitle", &UELDebugMenuRootBase::execSetMenuTitle },
			{ "SetOpenFlag", &UELDebugMenuRootBase::execSetOpenFlag },
			{ "SetParent", &UELDebugMenuRootBase::execSetParent },
			{ "SetParentRootMenu", &UELDebugMenuRootBase::execSetParentRootMenu },
			{ "SetRegistKey", &UELDebugMenuRootBase::execSetRegistKey },
			{ "SetShortcut", &UELDebugMenuRootBase::execSetShortcut },
			{ "UpdateSimpleMenuUIRecursive", &UELDebugMenuRootBase::execUpdateSimpleMenuUIRecursive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics
	{
		struct ELDebugMenuRootBase_eventAddShortcut_Parms
		{
			FString _strRegistKey;
			TArray<FELDebugMenuShortcutKeySettings> _cKeys;
			EELDebugMenuShortcutType _eShortCutType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cKeys;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__eShortCutType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__eShortCutType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventAddShortcut_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__strRegistKey_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__cKeys_Inner = { "_cKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__cKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__cKeys = { "_cKeys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventAddShortcut_Parms, _cKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__cKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__cKeys_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__eShortCutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__eShortCutType = { "_eShortCutType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventAddShortcut_Parms, _eShortCutType), Z_Construct_UEnum_ABP_200508_EELDebugMenuShortcutType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__cKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__cKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__eShortCutType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::NewProp__eShortCutType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "AddShortcut", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventAddShortcut_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics
	{
		struct ELDebugMenuRootBase_eventAddSubMenu_Parms
		{
			UELDebugMenuSubMenuBase* _pcSubMenu;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::NewProp__pcSubMenu = { "_pcSubMenu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventAddSubMenu_Parms, _pcSubMenu), Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventAddSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventAddSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventAddSubMenu_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::NewProp__pcSubMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "AddSubMenu", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventAddSubMenu_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics
	{
		struct ELDebugMenuRootBase_eventAddSubRootMenu_Parms
		{
			UELDebugMenuRootBase* _pcSubRootMenu;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::NewProp__pcSubRootMenu = { "_pcSubRootMenu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventAddSubRootMenu_Parms, _pcSubRootMenu), Z_Construct_UClass_UELDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventAddSubRootMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventAddSubRootMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventAddSubRootMenu_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::NewProp__pcSubRootMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "AddSubRootMenu", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventAddSubRootMenu_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_BindActionCore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_BindActionCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_BindActionCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "BindActionCore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_BindActionCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_BindActionCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_BindActionCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_BindActionCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_BindChangedOpenFlag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_BindChangedOpenFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_BindChangedOpenFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "BindChangedOpenFlag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_BindChangedOpenFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_BindChangedOpenFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_BindChangedOpenFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_BindChangedOpenFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_BindDrawCore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_BindDrawCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_BindDrawCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "BindDrawCore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_BindDrawCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_BindDrawCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_BindDrawCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_BindDrawCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics
	{
		struct ELDebugMenuRootBase_eventCreateSubMenu_Parms
		{
			UELDebugMenuSubMenuBase* _pcInst;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventCreateSubMenu_Parms, _pcInst), Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventCreateSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventCreateSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventCreateSubMenu_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "CreateSubMenu", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventCreateSubMenu_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics
	{
		struct ELDebugMenuRootBase_eventCreateSubRootMenu_Parms
		{
			UELDebugMenuRootBase* _pcInst;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventCreateSubRootMenu_Parms, _pcInst), Z_Construct_UClass_UELDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventCreateSubRootMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventCreateSubRootMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventCreateSubRootMenu_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "CreateSubRootMenu", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventCreateSubRootMenu_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics
	{
		struct ELDebugMenuRootBase_eventFindSimpleMenuUIRecursive_Parms
		{
			FELDebugMenuSimpleUIParam _rststParam;
			FString _strRegistKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rststParam;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp__rststParam = { "_rststParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventFindSimpleMenuUIRecursive_Parms, _rststParam), Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventFindSimpleMenuUIRecursive_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventFindSimpleMenuUIRecursive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventFindSimpleMenuUIRecursive_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp__rststParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "FindSimpleMenuUIRecursive", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventFindSimpleMenuUIRecursive_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics
	{
		struct ELDebugMenuRootBase_eventFindSubMenu_Parms
		{
			UELDebugMenuSubMenuBase* _pcSubMenu;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::NewProp__pcSubMenu = { "_pcSubMenu", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventFindSubMenu_Parms, _pcSubMenu), Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventFindSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventFindSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventFindSubMenu_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::NewProp__pcSubMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "FindSubMenu", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventFindSubMenu_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics
	{
		struct ELDebugMenuRootBase_eventFindSubRootMenu_Parms
		{
			UELDebugMenuRootBase* _pcSubRootMenu;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::NewProp__pcSubRootMenu = { "_pcSubRootMenu", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventFindSubRootMenu_Parms, _pcSubRootMenu), Z_Construct_UClass_UELDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventFindSubRootMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventFindSubRootMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventFindSubRootMenu_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::NewProp__pcSubRootMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "FindSubRootMenu", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventFindSubRootMenu_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_GetMenuTitle_Statics
	{
		struct ELDebugMenuRootBase_eventGetMenuTitle_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_GetMenuTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventGetMenuTitle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_GetMenuTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_GetMenuTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_GetMenuTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_GetMenuTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "GetMenuTitle", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventGetMenuTitle_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_GetMenuTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_GetMenuTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_GetMenuTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_GetMenuTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_GetMenuTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_GetMenuTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_GetRegistKey_Statics
	{
		struct ELDebugMenuRootBase_eventGetRegistKey_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_GetRegistKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventGetRegistKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_GetRegistKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_GetRegistKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_GetRegistKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_GetRegistKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "GetRegistKey", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventGetRegistKey_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_GetRegistKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_GetRegistKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_GetRegistKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_GetRegistKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_GetRegistKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_GetRegistKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase_Statics
	{
		struct ELDebugMenuRootBase_eventInitDebugMenuRootBase_Parms
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
	void Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventInitDebugMenuRootBase_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventInitDebugMenuRootBase_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "InitDebugMenuRootBase", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventInitDebugMenuRootBase_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_IsActive_Statics
	{
		struct ELDebugMenuRootBase_eventIsActive_Parms
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
	void Z_Construct_UFunction_UELDebugMenuRootBase_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventIsActive_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "IsActive", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventIsActive_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus_Statics
	{
		struct ELDebugMenuRootBase_eventIsGamePadFocus_Parms
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
	void Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventIsGamePadFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventIsGamePadFocus_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "IsGamePadFocus", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventIsGamePadFocus_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened_Statics
	{
		struct ELDebugMenuRootBase_eventIsOpened_Parms
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
	void Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventIsOpened_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventIsOpened_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "IsOpened", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventIsOpened_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics
	{
		struct ELDebugMenuRootBase_eventIsPressedShortcutKey_Parms
		{
			EELDebugMenuShortcutType _reShortCutType;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp__reShortCutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp__reShortCutType = { "_reShortCutType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventIsPressedShortcutKey_Parms, _reShortCutType), Z_Construct_UEnum_ABP_200508_EELDebugMenuShortcutType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp__pcPlayerController = { "_pcPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventIsPressedShortcutKey_Parms, _pcPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventIsPressedShortcutKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventIsPressedShortcutKey_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp__reShortCutType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp__reShortCutType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp__pcPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "IsPressedShortcutKey", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventIsPressedShortcutKey_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics
	{
		struct ELDebugMenuRootBase_eventRemoveSubMenu_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventRemoveSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventRemoveSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventRemoveSubMenu_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "RemoveSubMenu", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventRemoveSubMenu_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics
	{
		struct ELDebugMenuRootBase_eventRemoveSubRootMenu_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventRemoveSubRootMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventRemoveSubRootMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventRemoveSubRootMenu_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "RemoveSubRootMenu", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventRemoveSubRootMenu_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_SetActive_Statics
	{
		struct ELDebugMenuRootBase_eventSetActive_Parms
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
	void Z_Construct_UFunction_UELDebugMenuRootBase_SetActive_Statics::NewProp__bActive_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventSetActive_Parms*)Obj)->_bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_SetActive_Statics::NewProp__bActive = { "_bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventSetActive_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_SetActive_Statics::NewProp__bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_SetActive_Statics::NewProp__bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_SetActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "SetActive", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventSetActive_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam_Statics
	{
		struct ELDebugMenuRootBase_eventSetDefaultParam_Parms
		{
			FELDebugMenuRootDefaultParam _stParam;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam_Statics::NewProp__stParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam_Statics::NewProp__stParam = { "_stParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventSetDefaultParam_Parms, _stParam), Z_Construct_UScriptStruct_FELDebugMenuRootDefaultParam, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam_Statics::NewProp__stParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam_Statics::NewProp__stParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam_Statics::NewProp__stParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "SetDefaultParam", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventSetDefaultParam_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus_Statics
	{
		struct ELDebugMenuRootBase_eventSetGamePadFocus_Parms
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
	void Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus_Statics::NewProp__bGamePadFocus_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventSetGamePadFocus_Parms*)Obj)->_bGamePadFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus_Statics::NewProp__bGamePadFocus = { "_bGamePadFocus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventSetGamePadFocus_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus_Statics::NewProp__bGamePadFocus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus_Statics::NewProp__bGamePadFocus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "SetGamePadFocus", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventSetGamePadFocus_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle_Statics
	{
		struct ELDebugMenuRootBase_eventSetMenuTitle_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle_Statics::NewProp__strMenuTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle_Statics::NewProp__strMenuTitle = { "_strMenuTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventSetMenuTitle_Parms, _strMenuTitle), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle_Statics::NewProp__strMenuTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle_Statics::NewProp__strMenuTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle_Statics::NewProp__strMenuTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "SetMenuTitle", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventSetMenuTitle_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag_Statics
	{
		struct ELDebugMenuRootBase_eventSetOpenFlag_Parms
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
	void Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag_Statics::NewProp__bOpen_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventSetOpenFlag_Parms*)Obj)->_bOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag_Statics::NewProp__bOpen = { "_bOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventSetOpenFlag_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag_Statics::NewProp__bOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag_Statics::NewProp__bOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "SetOpenFlag", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventSetOpenFlag_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_SetParent_Statics
	{
		struct ELDebugMenuRootBase_eventSetParent_Parms
		{
			UELDebugMenuManager* _pcDebugMenuManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcDebugMenuManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_SetParent_Statics::NewProp__pcDebugMenuManager = { "_pcDebugMenuManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventSetParent_Parms, _pcDebugMenuManager), Z_Construct_UClass_UELDebugMenuManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_SetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_SetParent_Statics::NewProp__pcDebugMenuManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_SetParent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_SetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "SetParent", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventSetParent_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_SetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_SetParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_SetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_SetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_SetParentRootMenu_Statics
	{
		struct ELDebugMenuRootBase_eventSetParentRootMenu_Parms
		{
			UELDebugMenuRootBase* _pcDebugMenuRootBase;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcDebugMenuRootBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_SetParentRootMenu_Statics::NewProp__pcDebugMenuRootBase = { "_pcDebugMenuRootBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventSetParentRootMenu_Parms, _pcDebugMenuRootBase), Z_Construct_UClass_UELDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_SetParentRootMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_SetParentRootMenu_Statics::NewProp__pcDebugMenuRootBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_SetParentRootMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_SetParentRootMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "SetParentRootMenu", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventSetParentRootMenu_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_SetParentRootMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetParentRootMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_SetParentRootMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetParentRootMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_SetParentRootMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_SetParentRootMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey_Statics
	{
		struct ELDebugMenuRootBase_eventSetRegistKey_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventSetRegistKey_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey_Statics::NewProp__strRegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey_Statics::NewProp__strRegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "SetRegistKey", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventSetRegistKey_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics
	{
		struct ELDebugMenuRootBase_eventSetShortcut_Parms
		{
			TArray<FELDebugMenuShortcutKeySettings> _cKeys;
			FString _strRegistKey;
			EELDebugMenuShortcutType _eShortCutType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cKeys;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__cKeys_Inner = { "_cKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__cKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__cKeys = { "_cKeys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventSetShortcut_Parms, _cKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__cKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__cKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventSetShortcut_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__strRegistKey_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__eShortCutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__eShortCutType = { "_eShortCutType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventSetShortcut_Parms, _eShortCutType), Z_Construct_UEnum_ABP_200508_EELDebugMenuShortcutType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__cKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__cKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__eShortCutType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::NewProp__eShortCutType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "SetShortcut", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventSetShortcut_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics
	{
		struct ELDebugMenuRootBase_eventUpdateSimpleMenuUIRecursive_Parms
		{
			FELDebugMenuSimpleUIParam _rstParam;
			FString _strRegistKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rstParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstParam;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstParam = { "_rstParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventUpdateSimpleMenuUIRecursive_Parms, _rstParam), Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuRootBase_eventUpdateSimpleMenuUIRecursive_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuRootBase_eventUpdateSimpleMenuUIRecursive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuRootBase_eventUpdateSimpleMenuUIRecursive_Parms), &Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuRootBase, nullptr, "UpdateSimpleMenuUIRecursive", nullptr, nullptr, sizeof(ELDebugMenuRootBase_eventUpdateSimpleMenuUIRecursive_Parms), Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELDebugMenuRootBase_NoRegister()
	{
		return UELDebugMenuRootBase::StaticClass();
	}
	struct Z_Construct_UClass_UELDebugMenuRootBase_Statics
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
	UObject* (*const Z_Construct_UClass_UELDebugMenuRootBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuUIBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELDebugMenuRootBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_AddShortcut, "AddShortcut" }, // 962549302
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_AddSubMenu, "AddSubMenu" }, // 877918667
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_AddSubRootMenu, "AddSubRootMenu" }, // 1728524170
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_BindActionCore, "BindActionCore" }, // 3323435463
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_BindChangedOpenFlag, "BindChangedOpenFlag" }, // 3104257917
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_BindDrawCore, "BindDrawCore" }, // 3827395872
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubMenu, "CreateSubMenu" }, // 2233139323
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_CreateSubRootMenu, "CreateSubRootMenu" }, // 2249811619
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_FindSimpleMenuUIRecursive, "FindSimpleMenuUIRecursive" }, // 3083014055
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_FindSubMenu, "FindSubMenu" }, // 1184940815
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_FindSubRootMenu, "FindSubRootMenu" }, // 1953973076
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_GetMenuTitle, "GetMenuTitle" }, // 3206909265
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_GetRegistKey, "GetRegistKey" }, // 3139184560
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_InitDebugMenuRootBase, "InitDebugMenuRootBase" }, // 986754003
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_IsActive, "IsActive" }, // 1667394187
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_IsGamePadFocus, "IsGamePadFocus" }, // 2127726050
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_IsOpened, "IsOpened" }, // 712732998
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_IsPressedShortcutKey, "IsPressedShortcutKey" }, // 3521155786
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubMenu, "RemoveSubMenu" }, // 720531832
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_RemoveSubRootMenu, "RemoveSubRootMenu" }, // 2493604307
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_SetActive, "SetActive" }, // 3424200855
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_SetDefaultParam, "SetDefaultParam" }, // 4166226848
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_SetGamePadFocus, "SetGamePadFocus" }, // 3341784075
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_SetMenuTitle, "SetMenuTitle" }, // 3511384626
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_SetOpenFlag, "SetOpenFlag" }, // 1991759279
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_SetParent, "SetParent" }, // 489506591
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_SetParentRootMenu, "SetParentRootMenu" }, // 1861901718
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_SetRegistKey, "SetRegistKey" }, // 3637783027
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_SetShortcut, "SetShortcut" }, // 831377052
		{ &Z_Construct_UFunction_UELDebugMenuRootBase_UpdateSimpleMenuUIRecursive, "UpdateSimpleMenuUIRecursive" }, // 2479613451
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDebugMenuRootBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELDebugMenuRootBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus_ValueProp = { "m_cSubRootMenus", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UELDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus_Key_KeyProp = { "m_cSubRootMenus_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuRootBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus = { "m_cSubRootMenus", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELDebugMenuRootBase, m_cSubRootMenus), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubMenus_ValueProp = { "m_cSubMenus", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubMenus_Key_KeyProp = { "m_cSubMenus_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubMenus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuRootBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubMenus = { "m_cSubMenus", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELDebugMenuRootBase, m_cSubMenus), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubMenus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubMenus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cRefParentManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuRootBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cRefParentManager = { "m_cRefParentManager", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELDebugMenuRootBase, m_cRefParentManager), Z_Construct_UClass_UELDebugMenuManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cRefParentManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cRefParentManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cRefParentRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuRootBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cRefParentRoot = { "m_cRefParentRoot", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELDebugMenuRootBase, m_cRefParentRoot), Z_Construct_UClass_UELDebugMenuRootBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cRefParentRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cRefParentRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELDebugMenuRootBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubRootMenus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubMenus_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubMenus_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cSubMenus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cRefParentManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDebugMenuRootBase_Statics::NewProp_m_cRefParentRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELDebugMenuRootBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELDebugMenuRootBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELDebugMenuRootBase_Statics::ClassParams = {
		&UELDebugMenuRootBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELDebugMenuRootBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuRootBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELDebugMenuRootBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuRootBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELDebugMenuRootBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELDebugMenuRootBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELDebugMenuRootBase, 1097648699);
	template<> ABP_200508_API UClass* StaticClass<UELDebugMenuRootBase>()
	{
		return UELDebugMenuRootBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELDebugMenuRootBase(Z_Construct_UClass_UELDebugMenuRootBase, &UELDebugMenuRootBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELDebugMenuRootBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELDebugMenuRootBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
