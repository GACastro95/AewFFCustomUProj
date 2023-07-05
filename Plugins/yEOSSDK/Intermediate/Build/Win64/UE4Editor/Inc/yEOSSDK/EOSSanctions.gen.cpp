// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSanctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSanctions() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSanctions_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSanctions();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSSanctionsQueryPlayerSanctionsDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSanctions::execQueryPlayerSanctions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->QueryPlayerSanctions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSanctions::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSSanctionsAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSSanctions::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	void UEOSSanctions::StaticRegisterNativesUEOSSanctions()
	{
		UClass* Class = UEOSSanctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryPlayerSanctions", &UEOSSanctions::execQueryPlayerSanctions },
			{ "SetApiVersion", &UEOSSanctions::execSetApiVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions_Statics
	{
		struct EOSSanctions_eventQueryPlayerSanctions_Parms
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
	void Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSanctions_eventQueryPlayerSanctions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSanctions_eventQueryPlayerSanctions_Parms), &Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSanctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSanctions, nullptr, "QueryPlayerSanctions", nullptr, nullptr, sizeof(EOSSanctions_eventQueryPlayerSanctions_Parms), Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSanctions_SetApiVersion_Statics
	{
		struct EOSSanctions_eventSetApiVersion_Parms
		{
			FEOSSanctionsAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSanctions_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSanctions_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSanctions_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSanctions_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSanctions_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSanctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSanctions_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSanctions, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSSanctions_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSSanctions_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSanctions_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSanctions_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSanctions_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSanctions_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSanctions_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSanctions_NoRegister()
	{
		return UEOSSanctions::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSanctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryPlayerSanctionsDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_QueryPlayerSanctionsDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSanctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSanctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSanctions_QueryPlayerSanctions, "QueryPlayerSanctions" }, // 301719484
		{ &Z_Construct_UFunction_UEOSSanctions_SetApiVersion, "SetApiVersion" }, // 982013995
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSanctions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSanctions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSanctions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSanctions_Statics::NewProp_QueryPlayerSanctionsDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSanctions" },
		{ "ModuleRelativePath", "Public/EOSSanctions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSSanctions_Statics::NewProp_QueryPlayerSanctionsDispatcher = { "QueryPlayerSanctionsDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSanctions, QueryPlayerSanctionsDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSSanctionsQueryPlayerSanctionsDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSSanctions_Statics::NewProp_QueryPlayerSanctionsDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSanctions_Statics::NewProp_QueryPlayerSanctionsDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSSanctions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSanctions_Statics::NewProp_QueryPlayerSanctionsDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSanctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSanctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSanctions_Statics::ClassParams = {
		&UEOSSanctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSSanctions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSanctions_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSanctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSanctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSanctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSanctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSanctions, 3581028602);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSanctions>()
	{
		return UEOSSanctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSanctions(Z_Construct_UClass_UEOSSanctions, &UEOSSanctions::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSanctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSanctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
