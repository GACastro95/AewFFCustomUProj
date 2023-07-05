// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YGamePadMonitorDebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGamePadMonitorDebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYGamePadMonitorDebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYGamePadMonitorDebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UYGamePadMonitorDebugMenu::execGetMonitorNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMonitorNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGamePadMonitorDebugMenu::execGetMonitorPositionType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMonitorPositionType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGamePadMonitorDebugMenu::execGetMonitorType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMonitorType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGamePadMonitorDebugMenu::execIsEnableMonitor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableMonitor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGamePadMonitorDebugMenu::execSetEnableMonitor)
	{
		P_GET_UBOOL(Z_Param__bEnableMonitor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableMonitor(Z_Param__bEnableMonitor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGamePadMonitorDebugMenu::execSetMonitorNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMonitorNum(Z_Param__sNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGamePadMonitorDebugMenu::execSetMonitorPositionType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sMonitorPositionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMonitorPositionType(Z_Param__sMonitorPositionType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGamePadMonitorDebugMenu::execSetMonitorType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sMonitorType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMonitorType(Z_Param__sMonitorType);
		P_NATIVE_END;
	}
	void UYGamePadMonitorDebugMenu::StaticRegisterNativesUYGamePadMonitorDebugMenu()
	{
		UClass* Class = UYGamePadMonitorDebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMonitorNum", &UYGamePadMonitorDebugMenu::execGetMonitorNum },
			{ "GetMonitorPositionType", &UYGamePadMonitorDebugMenu::execGetMonitorPositionType },
			{ "GetMonitorType", &UYGamePadMonitorDebugMenu::execGetMonitorType },
			{ "IsEnableMonitor", &UYGamePadMonitorDebugMenu::execIsEnableMonitor },
			{ "SetEnableMonitor", &UYGamePadMonitorDebugMenu::execSetEnableMonitor },
			{ "SetMonitorNum", &UYGamePadMonitorDebugMenu::execSetMonitorNum },
			{ "SetMonitorPositionType", &UYGamePadMonitorDebugMenu::execSetMonitorPositionType },
			{ "SetMonitorType", &UYGamePadMonitorDebugMenu::execSetMonitorType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorNum_Statics
	{
		struct YGamePadMonitorDebugMenu_eventGetMonitorNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGamePadMonitorDebugMenu_eventGetMonitorNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGamePadMonitorDebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGamePadMonitorDebugMenu, nullptr, "GetMonitorNum", nullptr, nullptr, sizeof(YGamePadMonitorDebugMenu_eventGetMonitorNum_Parms), Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorPositionType_Statics
	{
		struct YGamePadMonitorDebugMenu_eventGetMonitorPositionType_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorPositionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGamePadMonitorDebugMenu_eventGetMonitorPositionType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorPositionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorPositionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorPositionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGamePadMonitorDebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorPositionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGamePadMonitorDebugMenu, nullptr, "GetMonitorPositionType", nullptr, nullptr, sizeof(YGamePadMonitorDebugMenu_eventGetMonitorPositionType_Parms), Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorPositionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorPositionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorPositionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorPositionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorPositionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorPositionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorType_Statics
	{
		struct YGamePadMonitorDebugMenu_eventGetMonitorType_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGamePadMonitorDebugMenu_eventGetMonitorType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGamePadMonitorDebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGamePadMonitorDebugMenu, nullptr, "GetMonitorType", nullptr, nullptr, sizeof(YGamePadMonitorDebugMenu_eventGetMonitorType_Parms), Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor_Statics
	{
		struct YGamePadMonitorDebugMenu_eventIsEnableMonitor_Parms
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
	void Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGamePadMonitorDebugMenu_eventIsEnableMonitor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGamePadMonitorDebugMenu_eventIsEnableMonitor_Parms), &Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGamePadMonitorDebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGamePadMonitorDebugMenu, nullptr, "IsEnableMonitor", nullptr, nullptr, sizeof(YGamePadMonitorDebugMenu_eventIsEnableMonitor_Parms), Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor_Statics
	{
		struct YGamePadMonitorDebugMenu_eventSetEnableMonitor_Parms
		{
			bool _bEnableMonitor;
		};
		static void NewProp__bEnableMonitor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bEnableMonitor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor_Statics::NewProp__bEnableMonitor_SetBit(void* Obj)
	{
		((YGamePadMonitorDebugMenu_eventSetEnableMonitor_Parms*)Obj)->_bEnableMonitor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor_Statics::NewProp__bEnableMonitor = { "_bEnableMonitor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGamePadMonitorDebugMenu_eventSetEnableMonitor_Parms), &Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor_Statics::NewProp__bEnableMonitor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor_Statics::NewProp__bEnableMonitor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGamePadMonitorDebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGamePadMonitorDebugMenu, nullptr, "SetEnableMonitor", nullptr, nullptr, sizeof(YGamePadMonitorDebugMenu_eventSetEnableMonitor_Parms), Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorNum_Statics
	{
		struct YGamePadMonitorDebugMenu_eventSetMonitorNum_Parms
		{
			int32 _sNum;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorNum_Statics::NewProp__sNum = { "_sNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGamePadMonitorDebugMenu_eventSetMonitorNum_Parms, _sNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorNum_Statics::NewProp__sNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGamePadMonitorDebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGamePadMonitorDebugMenu, nullptr, "SetMonitorNum", nullptr, nullptr, sizeof(YGamePadMonitorDebugMenu_eventSetMonitorNum_Parms), Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorPositionType_Statics
	{
		struct YGamePadMonitorDebugMenu_eventSetMonitorPositionType_Parms
		{
			int32 _sMonitorPositionType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sMonitorPositionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorPositionType_Statics::NewProp__sMonitorPositionType = { "_sMonitorPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGamePadMonitorDebugMenu_eventSetMonitorPositionType_Parms, _sMonitorPositionType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorPositionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorPositionType_Statics::NewProp__sMonitorPositionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorPositionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGamePadMonitorDebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorPositionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGamePadMonitorDebugMenu, nullptr, "SetMonitorPositionType", nullptr, nullptr, sizeof(YGamePadMonitorDebugMenu_eventSetMonitorPositionType_Parms), Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorPositionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorPositionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorPositionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorPositionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorPositionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorPositionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorType_Statics
	{
		struct YGamePadMonitorDebugMenu_eventSetMonitorType_Parms
		{
			int32 _sMonitorType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sMonitorType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorType_Statics::NewProp__sMonitorType = { "_sMonitorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGamePadMonitorDebugMenu_eventSetMonitorType_Parms, _sMonitorType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorType_Statics::NewProp__sMonitorType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGamePadMonitorDebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGamePadMonitorDebugMenu, nullptr, "SetMonitorType", nullptr, nullptr, sizeof(YGamePadMonitorDebugMenu_eventSetMonitorType_Parms), Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGamePadMonitorDebugMenu_NoRegister()
	{
		return UYGamePadMonitorDebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYGamePadMonitorDebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGamePadMonitorDebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGamePadMonitorDebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorNum, "GetMonitorNum" }, // 3055069645
		{ &Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorPositionType, "GetMonitorPositionType" }, // 3737160014
		{ &Z_Construct_UFunction_UYGamePadMonitorDebugMenu_GetMonitorType, "GetMonitorType" }, // 2266261323
		{ &Z_Construct_UFunction_UYGamePadMonitorDebugMenu_IsEnableMonitor, "IsEnableMonitor" }, // 1084925217
		{ &Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetEnableMonitor, "SetEnableMonitor" }, // 1481436818
		{ &Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorNum, "SetMonitorNum" }, // 3087811076
		{ &Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorPositionType, "SetMonitorPositionType" }, // 3770778152
		{ &Z_Construct_UFunction_UYGamePadMonitorDebugMenu_SetMonitorType, "SetMonitorType" }, // 3610708623
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGamePadMonitorDebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGamePadMonitorDebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGamePadMonitorDebugMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGamePadMonitorDebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGamePadMonitorDebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGamePadMonitorDebugMenu_Statics::ClassParams = {
		&UYGamePadMonitorDebugMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYGamePadMonitorDebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGamePadMonitorDebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGamePadMonitorDebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGamePadMonitorDebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGamePadMonitorDebugMenu, 195674456);
	template<> ABP_200508_API UClass* StaticClass<UYGamePadMonitorDebugMenu>()
	{
		return UYGamePadMonitorDebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGamePadMonitorDebugMenu(Z_Construct_UClass_UYGamePadMonitorDebugMenu, &UYGamePadMonitorDebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYGamePadMonitorDebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGamePadMonitorDebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
