// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDebugMenuSubMenuBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDebugMenuSubMenuBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuSubMenuBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuUIBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELDebugMenuSubMenuBase::execAddSubMenu)
	{
		P_GET_OBJECT(UELDebugMenuSubMenuBase,Z_Param__pcSubMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSubMenu(Z_Param__pcSubMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuSubMenuBase::execCreateSubMenu)
	{
		P_GET_OBJECT_REF(UELDebugMenuSubMenuBase,Z_Param_Out__pcInst);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey_pcParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateSubMenu(Z_Param_Out__pcInst,Z_Param__strRegistKey_pcParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuSubMenuBase::execFindSimpleMenuUIRecursive)
	{
		P_GET_STRUCT_REF(FELDebugMenuSimpleUIParam,Z_Param_Out__rstSubRootMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindSimpleMenuUIRecursive(Z_Param_Out__rstSubRootMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuSubMenuBase::execFindSubMenu)
	{
		P_GET_OBJECT_REF(UELDebugMenuSubMenuBase,Z_Param_Out__pcSubMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindSubMenu(Z_Param_Out__pcSubMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuSubMenuBase::execGetRegistKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRegistKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuSubMenuBase::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuSubMenuBase::execRemoveSubMenu)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSubMenu(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuSubMenuBase::execSetActive)
	{
		P_GET_UBOOL(Z_Param__bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param__bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuSubMenuBase::execSetDefaultParam)
	{
		P_GET_STRUCT_REF(FELDebugMenuSubMenuDefaultParam,Z_Param_Out__stParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultParam(Z_Param_Out__stParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuSubMenuBase::execSetParentRoot)
	{
		P_GET_OBJECT(UELDebugMenuRootBase,Z_Param__pcDebugMenuRootBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParentRoot(Z_Param__pcDebugMenuRootBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuSubMenuBase::execSetParentSubMenu)
	{
		P_GET_OBJECT(UELDebugMenuSubMenuBase,Z_Param__pcDebugMenuSubMenuBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParentSubMenu(Z_Param__pcDebugMenuSubMenuBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuSubMenuBase::execSetRegistKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegistKey(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuSubMenuBase::execUpdateSimpleMenuUIRecursive)
	{
		P_GET_STRUCT_REF(FELDebugMenuSimpleUIParam,Z_Param_Out__rstSubRootMenu);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateSimpleMenuUIRecursive(Z_Param_Out__rstSubRootMenu,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	void UELDebugMenuSubMenuBase::StaticRegisterNativesUELDebugMenuSubMenuBase()
	{
		UClass* Class = UELDebugMenuSubMenuBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSubMenu", &UELDebugMenuSubMenuBase::execAddSubMenu },
			{ "CreateSubMenu", &UELDebugMenuSubMenuBase::execCreateSubMenu },
			{ "FindSimpleMenuUIRecursive", &UELDebugMenuSubMenuBase::execFindSimpleMenuUIRecursive },
			{ "FindSubMenu", &UELDebugMenuSubMenuBase::execFindSubMenu },
			{ "GetRegistKey", &UELDebugMenuSubMenuBase::execGetRegistKey },
			{ "IsActive", &UELDebugMenuSubMenuBase::execIsActive },
			{ "RemoveSubMenu", &UELDebugMenuSubMenuBase::execRemoveSubMenu },
			{ "SetActive", &UELDebugMenuSubMenuBase::execSetActive },
			{ "SetDefaultParam", &UELDebugMenuSubMenuBase::execSetDefaultParam },
			{ "SetParentRoot", &UELDebugMenuSubMenuBase::execSetParentRoot },
			{ "SetParentSubMenu", &UELDebugMenuSubMenuBase::execSetParentSubMenu },
			{ "SetRegistKey", &UELDebugMenuSubMenuBase::execSetRegistKey },
			{ "UpdateSimpleMenuUIRecursive", &UELDebugMenuSubMenuBase::execUpdateSimpleMenuUIRecursive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics
	{
		struct ELDebugMenuSubMenuBase_eventAddSubMenu_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp__pcSubMenu = { "_pcSubMenu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventAddSubMenu_Parms, _pcSubMenu), Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventAddSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuSubMenuBase_eventAddSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuSubMenuBase_eventAddSubMenu_Parms), &Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp__pcSubMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuSubMenuBase, nullptr, "AddSubMenu", nullptr, nullptr, sizeof(ELDebugMenuSubMenuBase_eventAddSubMenu_Parms), Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics
	{
		struct ELDebugMenuSubMenuBase_eventCreateSubMenu_Parms
		{
			UELDebugMenuSubMenuBase* _pcInst;
			FString _strRegistKey_pcParent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_pcParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey_pcParent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventCreateSubMenu_Parms, _pcInst), Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp__strRegistKey_pcParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp__strRegistKey_pcParent = { "_strRegistKey_pcParent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventCreateSubMenu_Parms, _strRegistKey_pcParent), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp__strRegistKey_pcParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp__strRegistKey_pcParent_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuSubMenuBase_eventCreateSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuSubMenuBase_eventCreateSubMenu_Parms), &Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp__strRegistKey_pcParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuSubMenuBase, nullptr, "CreateSubMenu", nullptr, nullptr, sizeof(ELDebugMenuSubMenuBase_eventCreateSubMenu_Parms), Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics
	{
		struct ELDebugMenuSubMenuBase_eventFindSimpleMenuUIRecursive_Parms
		{
			FELDebugMenuSimpleUIParam _rstSubRootMenu;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu = { "_rstSubRootMenu", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventFindSimpleMenuUIRecursive_Parms, _rstSubRootMenu), Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventFindSimpleMenuUIRecursive_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuSubMenuBase_eventFindSimpleMenuUIRecursive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuSubMenuBase_eventFindSimpleMenuUIRecursive_Parms), &Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuSubMenuBase, nullptr, "FindSimpleMenuUIRecursive", nullptr, nullptr, sizeof(ELDebugMenuSubMenuBase_eventFindSimpleMenuUIRecursive_Parms), Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics
	{
		struct ELDebugMenuSubMenuBase_eventFindSubMenu_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp__pcSubMenu = { "_pcSubMenu", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventFindSubMenu_Parms, _pcSubMenu), Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventFindSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuSubMenuBase_eventFindSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuSubMenuBase_eventFindSubMenu_Parms), &Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp__pcSubMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuSubMenuBase, nullptr, "FindSubMenu", nullptr, nullptr, sizeof(ELDebugMenuSubMenuBase_eventFindSubMenu_Parms), Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuSubMenuBase_GetRegistKey_Statics
	{
		struct ELDebugMenuSubMenuBase_eventGetRegistKey_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_GetRegistKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventGetRegistKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuSubMenuBase_GetRegistKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_GetRegistKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_GetRegistKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_GetRegistKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuSubMenuBase, nullptr, "GetRegistKey", nullptr, nullptr, sizeof(ELDebugMenuSubMenuBase_eventGetRegistKey_Parms), Z_Construct_UFunction_UELDebugMenuSubMenuBase_GetRegistKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_GetRegistKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_GetRegistKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_GetRegistKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuSubMenuBase_GetRegistKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuSubMenuBase_GetRegistKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive_Statics
	{
		struct ELDebugMenuSubMenuBase_eventIsActive_Parms
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
	void Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuSubMenuBase_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuSubMenuBase_eventIsActive_Parms), &Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuSubMenuBase, nullptr, "IsActive", nullptr, nullptr, sizeof(ELDebugMenuSubMenuBase_eventIsActive_Parms), Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics
	{
		struct ELDebugMenuSubMenuBase_eventRemoveSubMenu_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventRemoveSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuSubMenuBase_eventRemoveSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuSubMenuBase_eventRemoveSubMenu_Parms), &Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuSubMenuBase, nullptr, "RemoveSubMenu", nullptr, nullptr, sizeof(ELDebugMenuSubMenuBase_eventRemoveSubMenu_Parms), Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive_Statics
	{
		struct ELDebugMenuSubMenuBase_eventSetActive_Parms
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
	void Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive_Statics::NewProp__bActive_SetBit(void* Obj)
	{
		((ELDebugMenuSubMenuBase_eventSetActive_Parms*)Obj)->_bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive_Statics::NewProp__bActive = { "_bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuSubMenuBase_eventSetActive_Parms), &Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive_Statics::NewProp__bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive_Statics::NewProp__bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuSubMenuBase, nullptr, "SetActive", nullptr, nullptr, sizeof(ELDebugMenuSubMenuBase_eventSetActive_Parms), Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam_Statics
	{
		struct ELDebugMenuSubMenuBase_eventSetDefaultParam_Parms
		{
			FELDebugMenuSubMenuDefaultParam _stParam;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam_Statics::NewProp__stParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam_Statics::NewProp__stParam = { "_stParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventSetDefaultParam_Parms, _stParam), Z_Construct_UScriptStruct_FELDebugMenuSubMenuDefaultParam, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam_Statics::NewProp__stParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam_Statics::NewProp__stParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam_Statics::NewProp__stParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuSubMenuBase, nullptr, "SetDefaultParam", nullptr, nullptr, sizeof(ELDebugMenuSubMenuBase_eventSetDefaultParam_Parms), Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentRoot_Statics
	{
		struct ELDebugMenuSubMenuBase_eventSetParentRoot_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentRoot_Statics::NewProp__pcDebugMenuRootBase = { "_pcDebugMenuRootBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventSetParentRoot_Parms, _pcDebugMenuRootBase), Z_Construct_UClass_UELDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentRoot_Statics::NewProp__pcDebugMenuRootBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuSubMenuBase, nullptr, "SetParentRoot", nullptr, nullptr, sizeof(ELDebugMenuSubMenuBase_eventSetParentRoot_Parms), Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentSubMenu_Statics
	{
		struct ELDebugMenuSubMenuBase_eventSetParentSubMenu_Parms
		{
			UELDebugMenuSubMenuBase* _pcDebugMenuSubMenuBase;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcDebugMenuSubMenuBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentSubMenu_Statics::NewProp__pcDebugMenuSubMenuBase = { "_pcDebugMenuSubMenuBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventSetParentSubMenu_Parms, _pcDebugMenuSubMenuBase), Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentSubMenu_Statics::NewProp__pcDebugMenuSubMenuBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuSubMenuBase, nullptr, "SetParentSubMenu", nullptr, nullptr, sizeof(ELDebugMenuSubMenuBase_eventSetParentSubMenu_Parms), Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey_Statics
	{
		struct ELDebugMenuSubMenuBase_eventSetRegistKey_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventSetRegistKey_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey_Statics::NewProp__strRegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey_Statics::NewProp__strRegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuSubMenuBase, nullptr, "SetRegistKey", nullptr, nullptr, sizeof(ELDebugMenuSubMenuBase_eventSetRegistKey_Parms), Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics
	{
		struct ELDebugMenuSubMenuBase_eventUpdateSimpleMenuUIRecursive_Parms
		{
			FELDebugMenuSimpleUIParam _rstSubRootMenu;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu = { "_rstSubRootMenu", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventUpdateSimpleMenuUIRecursive_Parms, _rstSubRootMenu), Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuSubMenuBase_eventUpdateSimpleMenuUIRecursive_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuSubMenuBase_eventUpdateSimpleMenuUIRecursive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuSubMenuBase_eventUpdateSimpleMenuUIRecursive_Parms), &Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__rstSubRootMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuSubMenuBase, nullptr, "UpdateSimpleMenuUIRecursive", nullptr, nullptr, sizeof(ELDebugMenuSubMenuBase_eventUpdateSimpleMenuUIRecursive_Parms), Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister()
	{
		return UELDebugMenuSubMenuBase::StaticClass();
	}
	struct Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics
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
	UObject* (*const Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuUIBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELDebugMenuSubMenuBase_AddSubMenu, "AddSubMenu" }, // 3056209448
		{ &Z_Construct_UFunction_UELDebugMenuSubMenuBase_CreateSubMenu, "CreateSubMenu" }, // 2218853944
		{ &Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSimpleMenuUIRecursive, "FindSimpleMenuUIRecursive" }, // 1953909495
		{ &Z_Construct_UFunction_UELDebugMenuSubMenuBase_FindSubMenu, "FindSubMenu" }, // 2371163986
		{ &Z_Construct_UFunction_UELDebugMenuSubMenuBase_GetRegistKey, "GetRegistKey" }, // 4263064228
		{ &Z_Construct_UFunction_UELDebugMenuSubMenuBase_IsActive, "IsActive" }, // 3244296375
		{ &Z_Construct_UFunction_UELDebugMenuSubMenuBase_RemoveSubMenu, "RemoveSubMenu" }, // 4069809240
		{ &Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetActive, "SetActive" }, // 1397015376
		{ &Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetDefaultParam, "SetDefaultParam" }, // 1067068308
		{ &Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentRoot, "SetParentRoot" }, // 4195004189
		{ &Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetParentSubMenu, "SetParentSubMenu" }, // 700280063
		{ &Z_Construct_UFunction_UELDebugMenuSubMenuBase_SetRegistKey, "SetRegistKey" }, // 1509132577
		{ &Z_Construct_UFunction_UELDebugMenuSubMenuBase_UpdateSimpleMenuUIRecursive, "UpdateSimpleMenuUIRecursive" }, // 37721144
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELDebugMenuSubMenuBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus_ValueProp = { "m_cSubMenus", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus_Key_KeyProp = { "m_cSubMenus_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSubMenuBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus = { "m_cSubMenus", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELDebugMenuSubMenuBase, m_cSubMenus), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSubMenuBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentRoot = { "m_cRefParentRoot", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELDebugMenuSubMenuBase, m_cRefParentRoot), Z_Construct_UClass_UELDebugMenuRootBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentSubMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSubMenuBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSubMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentSubMenu = { "m_cRefParentSubMenu", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELDebugMenuSubMenuBase, m_cRefParentSubMenu), Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentSubMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentSubMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cSubMenus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::NewProp_m_cRefParentSubMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELDebugMenuSubMenuBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::ClassParams = {
		&UELDebugMenuSubMenuBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELDebugMenuSubMenuBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELDebugMenuSubMenuBase, 4204819419);
	template<> ABP_200508_API UClass* StaticClass<UELDebugMenuSubMenuBase>()
	{
		return UELDebugMenuSubMenuBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELDebugMenuSubMenuBase(Z_Construct_UClass_UELDebugMenuSubMenuBase, &UELDebugMenuSubMenuBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELDebugMenuSubMenuBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELDebugMenuSubMenuBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
