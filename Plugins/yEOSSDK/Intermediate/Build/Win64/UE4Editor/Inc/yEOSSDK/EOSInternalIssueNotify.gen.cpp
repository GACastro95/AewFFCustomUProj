// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSInternalIssueNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSInternalIssueNotify() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSInternalIssueNotify_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSInternalIssueNotify();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockebleCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSInternalIssueDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSInternalIssueNotify::execCreate)
	{
		P_GET_OBJECT_REF(UEOSInternalIssueNotify,Z_Param_Out__pcInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSInternalIssueNotify::Create(Z_Param_Out__pcInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSInternalIssueNotify::execDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSInternalIssueNotify::Destroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSInternalIssueNotify::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSInternalIssueNotify**)Z_Param__Result=UEOSInternalIssueNotify::Get();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSInternalIssueNotify::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSInternalIssueNotify::IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSInternalIssueNotify::execSetEnable)
	{
		P_GET_UBOOL(Z_Param__bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSInternalIssueNotify::SetEnable(Z_Param__bEnable);
		P_NATIVE_END;
	}
	void UEOSInternalIssueNotify::StaticRegisterNativesUEOSInternalIssueNotify()
	{
		UClass* Class = UEOSInternalIssueNotify::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create", &UEOSInternalIssueNotify::execCreate },
			{ "Destroy", &UEOSInternalIssueNotify::execDestroy },
			{ "Get", &UEOSInternalIssueNotify::execGet },
			{ "IsEnabled", &UEOSInternalIssueNotify::execIsEnabled },
			{ "SetEnable", &UEOSInternalIssueNotify::execSetEnable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics
	{
		struct EOSInternalIssueNotify_eventCreate_Parms
		{
			UEOSInternalIssueNotify* _pcInstance;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInstance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics::NewProp__pcInstance = { "_pcInstance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSInternalIssueNotify_eventCreate_Parms, _pcInstance), Z_Construct_UClass_UEOSInternalIssueNotify_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSInternalIssueNotify_eventCreate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSInternalIssueNotify_eventCreate_Parms), &Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics::NewProp__pcInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSInternalIssueNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSInternalIssueNotify, nullptr, "Create", nullptr, nullptr, sizeof(EOSInternalIssueNotify_eventCreate_Parms), Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSInternalIssueNotify_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSInternalIssueNotify_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSInternalIssueNotify_Destroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSInternalIssueNotify_Destroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSInternalIssueNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSInternalIssueNotify_Destroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSInternalIssueNotify, nullptr, "Destroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSInternalIssueNotify_Destroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInternalIssueNotify_Destroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSInternalIssueNotify_Destroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSInternalIssueNotify_Destroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSInternalIssueNotify_Get_Statics
	{
		struct EOSInternalIssueNotify_eventGet_Parms
		{
			UEOSInternalIssueNotify* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSInternalIssueNotify_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSInternalIssueNotify_eventGet_Parms, ReturnValue), Z_Construct_UClass_UEOSInternalIssueNotify_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSInternalIssueNotify_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSInternalIssueNotify_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSInternalIssueNotify_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSInternalIssueNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSInternalIssueNotify_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSInternalIssueNotify, nullptr, "Get", nullptr, nullptr, sizeof(EOSInternalIssueNotify_eventGet_Parms), Z_Construct_UFunction_UEOSInternalIssueNotify_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInternalIssueNotify_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSInternalIssueNotify_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInternalIssueNotify_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSInternalIssueNotify_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSInternalIssueNotify_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled_Statics
	{
		struct EOSInternalIssueNotify_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSInternalIssueNotify_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSInternalIssueNotify_eventIsEnabled_Parms), &Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSInternalIssueNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSInternalIssueNotify, nullptr, "IsEnabled", nullptr, nullptr, sizeof(EOSInternalIssueNotify_eventIsEnabled_Parms), Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable_Statics
	{
		struct EOSInternalIssueNotify_eventSetEnable_Parms
		{
			bool _bEnable;
		};
		static void NewProp__bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable_Statics::NewProp__bEnable_SetBit(void* Obj)
	{
		((EOSInternalIssueNotify_eventSetEnable_Parms*)Obj)->_bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable_Statics::NewProp__bEnable = { "_bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSInternalIssueNotify_eventSetEnable_Parms), &Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable_Statics::NewProp__bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable_Statics::NewProp__bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSInternalIssueNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSInternalIssueNotify, nullptr, "SetEnable", nullptr, nullptr, sizeof(EOSInternalIssueNotify_eventSetEnable_Parms), Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSInternalIssueNotify_NoRegister()
	{
		return UEOSInternalIssueNotify::StaticClass();
	}
	struct Z_Construct_UClass_UEOSInternalIssueNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalIssueDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_InternalIssueDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSInternalIssueNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSLockebleCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSInternalIssueNotify_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSInternalIssueNotify_Create, "Create" }, // 2475178127
		{ &Z_Construct_UFunction_UEOSInternalIssueNotify_Destroy, "Destroy" }, // 12065659
		{ &Z_Construct_UFunction_UEOSInternalIssueNotify_Get, "Get" }, // 631337448
		{ &Z_Construct_UFunction_UEOSInternalIssueNotify_IsEnabled, "IsEnabled" }, // 2121302026
		{ &Z_Construct_UFunction_UEOSInternalIssueNotify_SetEnable, "SetEnable" }, // 4220234628
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSInternalIssueNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSInternalIssueNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSInternalIssueNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSInternalIssueNotify_Statics::NewProp_InternalIssueDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSInternalIssueNotify" },
		{ "ModuleRelativePath", "Public/EOSInternalIssueNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSInternalIssueNotify_Statics::NewProp_InternalIssueDispatcher = { "InternalIssueDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSInternalIssueNotify, InternalIssueDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSInternalIssueDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSInternalIssueNotify_Statics::NewProp_InternalIssueDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSInternalIssueNotify_Statics::NewProp_InternalIssueDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSInternalIssueNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSInternalIssueNotify_Statics::NewProp_InternalIssueDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSInternalIssueNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSInternalIssueNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSInternalIssueNotify_Statics::ClassParams = {
		&UEOSInternalIssueNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSInternalIssueNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSInternalIssueNotify_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSInternalIssueNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSInternalIssueNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSInternalIssueNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSInternalIssueNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSInternalIssueNotify, 2348031666);
	template<> YEOSSDK_API UClass* StaticClass<UEOSInternalIssueNotify>()
	{
		return UEOSInternalIssueNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSInternalIssueNotify(Z_Construct_UClass_UEOSInternalIssueNotify, &UEOSInternalIssueNotify::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSInternalIssueNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSInternalIssueNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
