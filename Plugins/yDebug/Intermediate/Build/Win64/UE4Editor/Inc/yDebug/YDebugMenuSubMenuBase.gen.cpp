// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDebugMenuSubMenuBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDebugMenuSubMenuBase() {}
// Cross Module References
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuSubMenuBase();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuUIBase();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuRootBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UYDebugMenuSubMenuBase::execAddSubMenu)
	{
		P_GET_OBJECT(UYDebugMenuSubMenuBase,Z_Param__pcSubMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSubMenu(Z_Param__pcSubMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuSubMenuBase::execCreateSubMenu)
	{
		P_GET_OBJECT_REF(UYDebugMenuSubMenuBase,Z_Param_Out__pcInst);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateSubMenu(Z_Param_Out__pcInst,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuSubMenuBase::execFindSimpleMenuUIRecursive)
	{
		P_GET_STRUCT_REF(FYDebugMenuSimpleUIParam,Z_Param_Out__rstSubRootMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindSimpleMenuUIRecursive(Z_Param_Out__rstSubRootMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuSubMenuBase::execFindSubMenu)
	{
		P_GET_OBJECT_REF(UYDebugMenuSubMenuBase,Z_Param_Out__pcSubMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindSubMenu(Z_Param_Out__pcSubMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuSubMenuBase::execGetRegistKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRegistKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuSubMenuBase::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuSubMenuBase::execRemoveSubMenu)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSubMenu(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuSubMenuBase::execSetActive)
	{
		P_GET_UBOOL(Z_Param__bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param__bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuSubMenuBase::execSetDefaultParam)
	{
		P_GET_STRUCT_REF(FYDebugMenuSubMenuDefaultParam,Z_Param_Out__stParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultParam(Z_Param_Out__stParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuSubMenuBase::execSetParentRoot)
	{
		P_GET_OBJECT(UYDebugMenuRootBase,Z_Param__pcDebugMenuRootBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParentRoot(Z_Param__pcDebugMenuRootBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuSubMenuBase::execSetParentSubMenu)
	{
		P_GET_OBJECT(UYDebugMenuSubMenuBase,Z_Param__pcDebugMenuSubMenuBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParentSubMenu(Z_Param__pcDebugMenuSubMenuBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuSubMenuBase::execSetRegistKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegistKey(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuSubMenuBase::execUpdateSimpleMenuUIRecursive)
	{
		P_GET_STRUCT_REF(FYDebugMenuSimpleUIParam,Z_Param_Out__rstSubRootMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateSimpleMenuUIRecursive(Z_Param_Out__rstSubRootMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	void UYDebugMenuSubMenuBase::StaticRegisterNativesUYDebugMenuSubMenuBase()
	{
		UClass* Class = UYDebugMenuSubMenuBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSubMenu", &UYDebugMenuSubMenuBase::execAddSubMenu },
			{ "CreateSubMenu", &UYDebugMenuSubMenuBase::execCreateSubMenu },
			{ "FindSimpleMenuUIRecursive", &UYDebugMenuSubMenuBase::execFindSimpleMenuUIRecursive },
			{ "FindSubMenu", &UYDebugMenuSubMenuBase::execFindSubMenu },
			{ "GetRegistKey", &UYDebugMenuSubMenuBase::execGetRegistKey },
			{ "IsActive", &UYDebugMenuSubMenuBase::execIsActive },
			{ "RemoveSubMenu", &UYDebugMenuSubMenuBase::execRemoveSubMenu },
			{ "SetActive", &UYDebugMenuSubMenuBase::execSetActive },
			{ "SetDefaultParam", &UYDebugMenuSubMenuBase::execSetDefaultParam },
			{ "SetParentRoot", &UYDebugMenuSubMenuBase::execSetParentRoot },
			{ "SetParentSubMenu", &UYDebugMenuSubMenuBase::execSetParentSubMenu },
			{ "SetRegistKey", &UYDebugMenuSubMenuBase::execSetRegistKey },
			{ "UpdateSimpleMenuUIRecursive", &UYDebugMenuSubMenuBase::execUpdateSimpleMenuUIRecursive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics
	{
		struct YDebugMenuSubMenuBase_eventAddSubMenu_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp__pcSubMenu = { "_pcSubMenu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventAddSubMenu_Parms, _pcSubMenu), Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventAddSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuSubMenuBase_eventAddSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuSubMenuBase_eventAddSubMenu_Parms), &Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp__pcSubMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuSubMenuBase, nullptr, "AddSubMenu", nullptr, nullptr, sizeof(YDebugMenuSubMenuBase_eventAddSubMenu_Parms), Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics
	{
		struct YDebugMenuSubMenuBase_eventCreateSubMenu_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventCreateSubMenu_Parms, _pcInst), Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventCreateSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuSubMenuBase_eventCreateSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuSubMenuBase_eventCreateSubMenu_Parms), &Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuSubMenuBase, nullptr, "CreateSubMenu", nullptr, nullptr, sizeof(YDebugMenuSubMenuBase_eventCreateSubMenu_Parms), Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics
	{
		struct YDebugMenuSubMenuBase_eventFindSimpleMenuUIRecursive_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu = { "_rstSubRootMenu", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventFindSimpleMenuUIRecursive_Parms, _rstSubRootMenu), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventFindSimpleMenuUIRecursive_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuSubMenuBase_eventFindSimpleMenuUIRecursive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuSubMenuBase_eventFindSimpleMenuUIRecursive_Parms), &Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuSubMenuBase, nullptr, "FindSimpleMenuUIRecursive", nullptr, nullptr, sizeof(YDebugMenuSubMenuBase_eventFindSimpleMenuUIRecursive_Parms), Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics
	{
		struct YDebugMenuSubMenuBase_eventFindSubMenu_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp__pcSubMenu = { "_pcSubMenu", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventFindSubMenu_Parms, _pcSubMenu), Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventFindSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuSubMenuBase_eventFindSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuSubMenuBase_eventFindSubMenu_Parms), &Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp__pcSubMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuSubMenuBase, nullptr, "FindSubMenu", nullptr, nullptr, sizeof(YDebugMenuSubMenuBase_eventFindSubMenu_Parms), Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuSubMenuBase_GetRegistKey_Statics
	{
		struct YDebugMenuSubMenuBase_eventGetRegistKey_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_GetRegistKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventGetRegistKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuSubMenuBase_GetRegistKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_GetRegistKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_GetRegistKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_GetRegistKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuSubMenuBase, nullptr, "GetRegistKey", nullptr, nullptr, sizeof(YDebugMenuSubMenuBase_eventGetRegistKey_Parms), Z_Construct_UFunction_UYDebugMenuSubMenuBase_GetRegistKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_GetRegistKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_GetRegistKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_GetRegistKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuSubMenuBase_GetRegistKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuSubMenuBase_GetRegistKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive_Statics
	{
		struct YDebugMenuSubMenuBase_eventIsActive_Parms
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
	void Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuSubMenuBase_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuSubMenuBase_eventIsActive_Parms), &Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuSubMenuBase, nullptr, "IsActive", nullptr, nullptr, sizeof(YDebugMenuSubMenuBase_eventIsActive_Parms), Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics
	{
		struct YDebugMenuSubMenuBase_eventRemoveSubMenu_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventRemoveSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuSubMenuBase_eventRemoveSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuSubMenuBase_eventRemoveSubMenu_Parms), &Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuSubMenuBase, nullptr, "RemoveSubMenu", nullptr, nullptr, sizeof(YDebugMenuSubMenuBase_eventRemoveSubMenu_Parms), Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive_Statics
	{
		struct YDebugMenuSubMenuBase_eventSetActive_Parms
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
	void Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive_Statics::NewProp__bActive_SetBit(void* Obj)
	{
		((YDebugMenuSubMenuBase_eventSetActive_Parms*)Obj)->_bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive_Statics::NewProp__bActive = { "_bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuSubMenuBase_eventSetActive_Parms), &Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive_Statics::NewProp__bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive_Statics::NewProp__bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuSubMenuBase, nullptr, "SetActive", nullptr, nullptr, sizeof(YDebugMenuSubMenuBase_eventSetActive_Parms), Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam_Statics
	{
		struct YDebugMenuSubMenuBase_eventSetDefaultParam_Parms
		{
			FYDebugMenuSubMenuDefaultParam _stParam;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam_Statics::NewProp__stParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam_Statics::NewProp__stParam = { "_stParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventSetDefaultParam_Parms, _stParam), Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam_Statics::NewProp__stParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam_Statics::NewProp__stParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam_Statics::NewProp__stParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuSubMenuBase, nullptr, "SetDefaultParam", nullptr, nullptr, sizeof(YDebugMenuSubMenuBase_eventSetDefaultParam_Parms), Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentRoot_Statics
	{
		struct YDebugMenuSubMenuBase_eventSetParentRoot_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentRoot_Statics::NewProp__pcDebugMenuRootBase = { "_pcDebugMenuRootBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventSetParentRoot_Parms, _pcDebugMenuRootBase), Z_Construct_UClass_UYDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentRoot_Statics::NewProp__pcDebugMenuRootBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuSubMenuBase, nullptr, "SetParentRoot", nullptr, nullptr, sizeof(YDebugMenuSubMenuBase_eventSetParentRoot_Parms), Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentSubMenu_Statics
	{
		struct YDebugMenuSubMenuBase_eventSetParentSubMenu_Parms
		{
			UYDebugMenuSubMenuBase* _pcDebugMenuSubMenuBase;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcDebugMenuSubMenuBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentSubMenu_Statics::NewProp__pcDebugMenuSubMenuBase = { "_pcDebugMenuSubMenuBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventSetParentSubMenu_Parms, _pcDebugMenuSubMenuBase), Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentSubMenu_Statics::NewProp__pcDebugMenuSubMenuBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuSubMenuBase, nullptr, "SetParentSubMenu", nullptr, nullptr, sizeof(YDebugMenuSubMenuBase_eventSetParentSubMenu_Parms), Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey_Statics
	{
		struct YDebugMenuSubMenuBase_eventSetRegistKey_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventSetRegistKey_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey_Statics::NewProp__strRegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey_Statics::NewProp__strRegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuSubMenuBase, nullptr, "SetRegistKey", nullptr, nullptr, sizeof(YDebugMenuSubMenuBase_eventSetRegistKey_Parms), Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics
	{
		struct YDebugMenuSubMenuBase_eventUpdateSimpleMenuUIRecursive_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu = { "_rstSubRootMenu", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventUpdateSimpleMenuUIRecursive_Parms, _rstSubRootMenu), Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuSubMenuBase_eventUpdateSimpleMenuUIRecursive_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuSubMenuBase_eventUpdateSimpleMenuUIRecursive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuSubMenuBase_eventUpdateSimpleMenuUIRecursive_Parms), &Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuSubMenuBase, nullptr, "UpdateSimpleMenuUIRecursive", nullptr, nullptr, sizeof(YDebugMenuSubMenuBase_eventUpdateSimpleMenuUIRecursive_Parms), Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister()
	{
		return UYDebugMenuSubMenuBase::StaticClass();
	}
	struct Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_m_cSubMenus_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cSubMenus_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cSubMenus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cSubMenus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cRefParentRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_m_cRefParentRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cRefParentSubMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_m_cRefParentSubMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYDebugMenuUIBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYDebugMenuSubMenuBase_AddSubMenu, "AddSubMenu" }, // 130747381
		{ &Z_Construct_UFunction_UYDebugMenuSubMenuBase_CreateSubMenu, "CreateSubMenu" }, // 278746572
		{ &Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSimpleMenuUIRecursive, "FindSimpleMenuUIRecursive" }, // 3014964125
		{ &Z_Construct_UFunction_UYDebugMenuSubMenuBase_FindSubMenu, "FindSubMenu" }, // 2789741314
		{ &Z_Construct_UFunction_UYDebugMenuSubMenuBase_GetRegistKey, "GetRegistKey" }, // 756543749
		{ &Z_Construct_UFunction_UYDebugMenuSubMenuBase_IsActive, "IsActive" }, // 3245246950
		{ &Z_Construct_UFunction_UYDebugMenuSubMenuBase_RemoveSubMenu, "RemoveSubMenu" }, // 489964753
		{ &Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetActive, "SetActive" }, // 444100096
		{ &Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetDefaultParam, "SetDefaultParam" }, // 638848440
		{ &Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentRoot, "SetParentRoot" }, // 824694588
		{ &Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetParentSubMenu, "SetParentSubMenu" }, // 3712917444
		{ &Z_Construct_UFunction_UYDebugMenuSubMenuBase_SetRegistKey, "SetRegistKey" }, // 1690417288
		{ &Z_Construct_UFunction_UYDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive, "UpdateSimpleMenuUIRecursive" }, // 4281396089
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YDebugMenuSubMenuBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus_ValueProp = { "m_cSubMenus", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus_Key_KeyProp = { "m_cSubMenus_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuSubMenuBase" },
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus = { "m_cSubMenus", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuSubMenuBase, m_cSubMenus), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuSubMenuBase" },
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentRoot = { "m_cRefParentRoot", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuSubMenuBase, m_cRefParentRoot), Z_Construct_UClass_UYDebugMenuRootBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentSubMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuSubMenuBase" },
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentSubMenu = { "m_cRefParentSubMenu", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuSubMenuBase, m_cRefParentSubMenu), Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentSubMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentSubMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentSubMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYDebugMenuSubMenuBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::ClassParams = {
		&UYDebugMenuSubMenuBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYDebugMenuSubMenuBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYDebugMenuSubMenuBase, 2329557962);
	template<> YDEBUG_API UClass* StaticClass<UYDebugMenuSubMenuBase>()
	{
		return UYDebugMenuSubMenuBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYDebugMenuSubMenuBase(Z_Construct_UClass_UYDebugMenuSubMenuBase, &UYDebugMenuSubMenuBase::StaticClass, TEXT("/Script/yDebug"), TEXT("UYDebugMenuSubMenuBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYDebugMenuSubMenuBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
