// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSIssueNotifyDisabler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSIssueNotifyDisabler() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIssueNotifyDisabler_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIssueNotifyDisabler();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSInternalIssueNotify_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSIssueNotifyDisabler::execCreateIssueNotifyDisabler)
	{
		P_GET_OBJECT_REF(UEOSIssueNotifyDisabler,Z_Param_Out__pcInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSIssueNotifyDisabler::CreateIssueNotifyDisabler(Z_Param_Out__pcInstance);
		P_NATIVE_END;
	}
	void UEOSIssueNotifyDisabler::StaticRegisterNativesUEOSIssueNotifyDisabler()
	{
		UClass* Class = UEOSIssueNotifyDisabler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateIssueNotifyDisabler", &UEOSIssueNotifyDisabler::execCreateIssueNotifyDisabler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics
	{
		struct EOSIssueNotifyDisabler_eventCreateIssueNotifyDisabler_Parms
		{
			UEOSIssueNotifyDisabler* _pcInstance;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics::NewProp__pcInstance = { "_pcInstance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSIssueNotifyDisabler_eventCreateIssueNotifyDisabler_Parms, _pcInstance), Z_Construct_UClass_UEOSIssueNotifyDisabler_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSIssueNotifyDisabler_eventCreateIssueNotifyDisabler_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSIssueNotifyDisabler_eventCreateIssueNotifyDisabler_Parms), &Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics::NewProp__pcInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSIssueNotifyDisabler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSIssueNotifyDisabler, nullptr, "CreateIssueNotifyDisabler", nullptr, nullptr, sizeof(EOSIssueNotifyDisabler_eventCreateIssueNotifyDisabler_Parms), Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSIssueNotifyDisabler_NoRegister()
	{
		return UEOSIssueNotifyDisabler::StaticClass();
	}
	struct Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcHook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcHook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSIssueNotifyDisabler_CreateIssueNotifyDisabler, "CreateIssueNotifyDisabler" }, // 1323927638
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSIssueNotifyDisabler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSIssueNotifyDisabler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::NewProp_m_pcHook_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSIssueNotifyDisabler" },
		{ "ModuleRelativePath", "Public/EOSIssueNotifyDisabler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::NewProp_m_pcHook = { "m_pcHook", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSIssueNotifyDisabler, m_pcHook), Z_Construct_UClass_UEOSInternalIssueNotify_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::NewProp_m_pcHook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::NewProp_m_pcHook_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::NewProp_m_pcHook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSIssueNotifyDisabler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::ClassParams = {
		&UEOSIssueNotifyDisabler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSIssueNotifyDisabler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSIssueNotifyDisabler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSIssueNotifyDisabler, 2304245257);
	template<> YEOSSDK_API UClass* StaticClass<UEOSIssueNotifyDisabler>()
	{
		return UEOSIssueNotifyDisabler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSIssueNotifyDisabler(Z_Construct_UClass_UEOSIssueNotifyDisabler, &UEOSIssueNotifyDisabler::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSIssueNotifyDisabler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSIssueNotifyDisabler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
