// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ActionQueryExternalAccountIdStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionQueryExternalAccountIdStats() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UActionQueryExternalAccountIdStats_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UActionQueryExternalAccountIdStats();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_AsyncCompletedQueryExternalAccountIdStats__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UActionQueryExternalAccountIdStats::execAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Abort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionQueryExternalAccountIdStats::execActionQueryExternalAccountIdStats)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetProductUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActionQueryExternalAccountIdStats**)Z_Param__Result=UActionQueryExternalAccountIdStats::ActionQueryExternalAccountIdStats(Z_Param_NewWorldContextObject,Z_Param_TargetProductUserId);
		P_NATIVE_END;
	}
	void UActionQueryExternalAccountIdStats::StaticRegisterNativesUActionQueryExternalAccountIdStats()
	{
		UClass* Class = UActionQueryExternalAccountIdStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Abort", &UActionQueryExternalAccountIdStats::execAbort },
			{ "ActionQueryExternalAccountIdStats", &UActionQueryExternalAccountIdStats::execActionQueryExternalAccountIdStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionQueryExternalAccountIdStats_Abort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryExternalAccountIdStats_Abort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionQueryExternalAccountIdStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionQueryExternalAccountIdStats_Abort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionQueryExternalAccountIdStats, nullptr, "Abort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryExternalAccountIdStats_Abort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryExternalAccountIdStats_Abort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionQueryExternalAccountIdStats_Abort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionQueryExternalAccountIdStats_Abort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics
	{
		struct ActionQueryExternalAccountIdStats_eventActionQueryExternalAccountIdStats_Parms
		{
			UObject* NewWorldContextObject;
			FString TargetProductUserId;
			UActionQueryExternalAccountIdStats* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetProductUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetProductUserId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryExternalAccountIdStats_eventActionQueryExternalAccountIdStats_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::NewProp_TargetProductUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::NewProp_TargetProductUserId = { "TargetProductUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryExternalAccountIdStats_eventActionQueryExternalAccountIdStats_Parms, TargetProductUserId), METADATA_PARAMS(Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::NewProp_TargetProductUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::NewProp_TargetProductUserId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionQueryExternalAccountIdStats_eventActionQueryExternalAccountIdStats_Parms, ReturnValue), Z_Construct_UClass_UActionQueryExternalAccountIdStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::NewProp_TargetProductUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionQueryExternalAccountIdStats.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionQueryExternalAccountIdStats, nullptr, "ActionQueryExternalAccountIdStats", nullptr, nullptr, sizeof(ActionQueryExternalAccountIdStats_eventActionQueryExternalAccountIdStats_Parms), Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActionQueryExternalAccountIdStats_NoRegister()
	{
		return UActionQueryExternalAccountIdStats::StaticClass();
	}
	struct Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionQueryExternalAccountIdStats_Abort, "Abort" }, // 4284335850
		{ &Z_Construct_UFunction_UActionQueryExternalAccountIdStats_ActionQueryExternalAccountIdStats, "ActionQueryExternalAccountIdStats" }, // 3823619695
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActionQueryExternalAccountIdStats.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActionQueryExternalAccountIdStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryExternalAccountIdStats" },
		{ "ModuleRelativePath", "Public/ActionQueryExternalAccountIdStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryExternalAccountIdStats, OnCompleted), Z_Construct_UDelegateFunction_ABP_200508_AsyncCompletedQueryExternalAccountIdStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryExternalAccountIdStats" },
		{ "ModuleRelativePath", "Public/ActionQueryExternalAccountIdStats.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryExternalAccountIdStats, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionQueryExternalAccountIdStats" },
		{ "ModuleRelativePath", "Public/ActionQueryExternalAccountIdStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionQueryExternalAccountIdStats, ProductUserID), METADATA_PARAMS(Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::NewProp_ProductUserID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionQueryExternalAccountIdStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::ClassParams = {
		&UActionQueryExternalAccountIdStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionQueryExternalAccountIdStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActionQueryExternalAccountIdStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActionQueryExternalAccountIdStats, 815277272);
	template<> ABP_200508_API UClass* StaticClass<UActionQueryExternalAccountIdStats>()
	{
		return UActionQueryExternalAccountIdStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActionQueryExternalAccountIdStats(Z_Construct_UClass_UActionQueryExternalAccountIdStats, &UActionQueryExternalAccountIdStats::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UActionQueryExternalAccountIdStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionQueryExternalAccountIdStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
