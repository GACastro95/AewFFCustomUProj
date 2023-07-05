// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSearchResultsBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSearchResultsBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSearchResultsBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSearchResultsBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSearchResultsBase::execAnalyzeResults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AnalyzeResults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSearchResultsBase::execGetResultNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResultNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSearchResultsBase::execGetResults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,UEOSCommunityInfoBase*>*)Z_Param__Result=P_THIS->GetResults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSearchResultsBase::execGetSearchName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSearchName();
		P_NATIVE_END;
	}
	void UEOSSearchResultsBase::StaticRegisterNativesUEOSSearchResultsBase()
	{
		UClass* Class = UEOSSearchResultsBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnalyzeResults", &UEOSSearchResultsBase::execAnalyzeResults },
			{ "GetResultNum", &UEOSSearchResultsBase::execGetResultNum },
			{ "GetResults", &UEOSSearchResultsBase::execGetResults },
			{ "GetSearchName", &UEOSSearchResultsBase::execGetSearchName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSearchResultsBase_AnalyzeResults_Statics
	{
		struct EOSSearchResultsBase_eventAnalyzeResults_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSearchResultsBase_AnalyzeResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSearchResultsBase_eventAnalyzeResults_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSearchResultsBase_AnalyzeResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSearchResultsBase_AnalyzeResults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSearchResultsBase_AnalyzeResults_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSearchResultsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSearchResultsBase_AnalyzeResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSearchResultsBase, nullptr, "AnalyzeResults", nullptr, nullptr, sizeof(EOSSearchResultsBase_eventAnalyzeResults_Parms), Z_Construct_UFunction_UEOSSearchResultsBase_AnalyzeResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSearchResultsBase_AnalyzeResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSearchResultsBase_AnalyzeResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSearchResultsBase_AnalyzeResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSearchResultsBase_AnalyzeResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSearchResultsBase_AnalyzeResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSearchResultsBase_GetResultNum_Statics
	{
		struct EOSSearchResultsBase_eventGetResultNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSearchResultsBase_GetResultNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSearchResultsBase_eventGetResultNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSearchResultsBase_GetResultNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSearchResultsBase_GetResultNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSearchResultsBase_GetResultNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSearchResultsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSearchResultsBase_GetResultNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSearchResultsBase, nullptr, "GetResultNum", nullptr, nullptr, sizeof(EOSSearchResultsBase_eventGetResultNum_Parms), Z_Construct_UFunction_UEOSSearchResultsBase_GetResultNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSearchResultsBase_GetResultNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSearchResultsBase_GetResultNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSearchResultsBase_GetResultNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSearchResultsBase_GetResultNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSearchResultsBase_GetResultNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics
	{
		struct EOSSearchResultsBase_eventGetResults_Parms
		{
			TMap<FString,UEOSCommunityInfoBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSearchResultsBase_eventGetResults_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSearchResultsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSearchResultsBase, nullptr, "GetResults", nullptr, nullptr, sizeof(EOSSearchResultsBase_eventGetResults_Parms), Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSearchResultsBase_GetResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSearchResultsBase_GetResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSearchResultsBase_GetSearchName_Statics
	{
		struct EOSSearchResultsBase_eventGetSearchName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSearchResultsBase_GetSearchName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSearchResultsBase_eventGetSearchName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSearchResultsBase_GetSearchName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSearchResultsBase_GetSearchName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSearchResultsBase_GetSearchName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSearchResultsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSearchResultsBase_GetSearchName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSearchResultsBase, nullptr, "GetSearchName", nullptr, nullptr, sizeof(EOSSearchResultsBase_eventGetSearchName_Parms), Z_Construct_UFunction_UEOSSearchResultsBase_GetSearchName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSearchResultsBase_GetSearchName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSearchResultsBase_GetSearchName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSearchResultsBase_GetSearchName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSearchResultsBase_GetSearchName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSearchResultsBase_GetSearchName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSearchResultsBase_NoRegister()
	{
		return UEOSSearchResultsBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSearchResultsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cResults_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cResults_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSearchResultsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSearchResultsBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSearchResultsBase_AnalyzeResults, "AnalyzeResults" }, // 186964630
		{ &Z_Construct_UFunction_UEOSSearchResultsBase_GetResultNum, "GetResultNum" }, // 1238708172
		{ &Z_Construct_UFunction_UEOSSearchResultsBase_GetResults, "GetResults" }, // 3539968820
		{ &Z_Construct_UFunction_UEOSSearchResultsBase_GetSearchName, "GetSearchName" }, // 11389616
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSearchResultsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSearchResultsBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSearchResultsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSearchResultsBase_Statics::NewProp_m_cResults_ValueProp = { "m_cResults", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSSearchResultsBase_Statics::NewProp_m_cResults_Key_KeyProp = { "m_cResults_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSearchResultsBase_Statics::NewProp_m_cResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSearchResultsBase" },
		{ "ModuleRelativePath", "Public/EOSSearchResultsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSSearchResultsBase_Statics::NewProp_m_cResults = { "m_cResults", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSearchResultsBase, m_cResults), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSSearchResultsBase_Statics::NewProp_m_cResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSearchResultsBase_Statics::NewProp_m_cResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSSearchResultsBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSearchResultsBase_Statics::NewProp_m_cResults_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSearchResultsBase_Statics::NewProp_m_cResults_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSearchResultsBase_Statics::NewProp_m_cResults,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSearchResultsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSearchResultsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSearchResultsBase_Statics::ClassParams = {
		&UEOSSearchResultsBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSSearchResultsBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSearchResultsBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSearchResultsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSearchResultsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSearchResultsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSearchResultsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSearchResultsBase, 1915044772);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSearchResultsBase>()
	{
		return UEOSSearchResultsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSearchResultsBase(Z_Construct_UClass_UEOSSearchResultsBase, &UEOSSearchResultsBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSearchResultsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSearchResultsBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
