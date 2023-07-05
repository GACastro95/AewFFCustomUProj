// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ActionWaitReplicationConnections.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionWaitReplicationConnections() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UActionWaitReplicationConnections_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UActionWaitReplicationConnections();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_AsyncCompletedWaitReplicationConnections__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UActionWaitReplicationConnections::execAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Abort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionWaitReplicationConnections::execActionWaitReplicationConnections)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActionWaitReplicationConnections**)Z_Param__Result=UActionWaitReplicationConnections::ActionWaitReplicationConnections(Z_Param_NewWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionWaitReplicationConnections::execCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Completed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionWaitReplicationConnections::execPollStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PollStatus();
		P_NATIVE_END;
	}
	void UActionWaitReplicationConnections::StaticRegisterNativesUActionWaitReplicationConnections()
	{
		UClass* Class = UActionWaitReplicationConnections::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Abort", &UActionWaitReplicationConnections::execAbort },
			{ "ActionWaitReplicationConnections", &UActionWaitReplicationConnections::execActionWaitReplicationConnections },
			{ "Completed", &UActionWaitReplicationConnections::execCompleted },
			{ "PollStatus", &UActionWaitReplicationConnections::execPollStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionWaitReplicationConnections_Abort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionWaitReplicationConnections_Abort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionWaitReplicationConnections.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionWaitReplicationConnections_Abort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionWaitReplicationConnections, nullptr, "Abort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionWaitReplicationConnections_Abort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionWaitReplicationConnections_Abort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionWaitReplicationConnections_Abort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionWaitReplicationConnections_Abort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections_Statics
	{
		struct ActionWaitReplicationConnections_eventActionWaitReplicationConnections_Parms
		{
			UObject* NewWorldContextObject;
			UActionWaitReplicationConnections* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionWaitReplicationConnections_eventActionWaitReplicationConnections_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionWaitReplicationConnections_eventActionWaitReplicationConnections_Parms, ReturnValue), Z_Construct_UClass_UActionWaitReplicationConnections_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionWaitReplicationConnections.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionWaitReplicationConnections, nullptr, "ActionWaitReplicationConnections", nullptr, nullptr, sizeof(ActionWaitReplicationConnections_eventActionWaitReplicationConnections_Parms), Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionWaitReplicationConnections_Completed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionWaitReplicationConnections_Completed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionWaitReplicationConnections.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionWaitReplicationConnections_Completed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionWaitReplicationConnections, nullptr, "Completed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionWaitReplicationConnections_Completed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionWaitReplicationConnections_Completed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionWaitReplicationConnections_Completed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionWaitReplicationConnections_Completed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionWaitReplicationConnections_PollStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionWaitReplicationConnections_PollStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionWaitReplicationConnections.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionWaitReplicationConnections_PollStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionWaitReplicationConnections, nullptr, "PollStatus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionWaitReplicationConnections_PollStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionWaitReplicationConnections_PollStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionWaitReplicationConnections_PollStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionWaitReplicationConnections_PollStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActionWaitReplicationConnections_NoRegister()
	{
		return UActionWaitReplicationConnections::StaticClass();
	}
	struct Z_Construct_UClass_UActionWaitReplicationConnections_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionWaitReplicationConnections_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionWaitReplicationConnections_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionWaitReplicationConnections_Abort, "Abort" }, // 4148868159
		{ &Z_Construct_UFunction_UActionWaitReplicationConnections_ActionWaitReplicationConnections, "ActionWaitReplicationConnections" }, // 2460039999
		{ &Z_Construct_UFunction_UActionWaitReplicationConnections_Completed, "Completed" }, // 3622634219
		{ &Z_Construct_UFunction_UActionWaitReplicationConnections_PollStatus, "PollStatus" }, // 2514120315
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionWaitReplicationConnections_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActionWaitReplicationConnections.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActionWaitReplicationConnections.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionWaitReplicationConnections_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionWaitReplicationConnections" },
		{ "ModuleRelativePath", "Public/ActionWaitReplicationConnections.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActionWaitReplicationConnections_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionWaitReplicationConnections, OnCompleted), Z_Construct_UDelegateFunction_ABP_200508_AsyncCompletedWaitReplicationConnections__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActionWaitReplicationConnections_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionWaitReplicationConnections_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionWaitReplicationConnections_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionWaitReplicationConnections" },
		{ "ModuleRelativePath", "Public/ActionWaitReplicationConnections.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionWaitReplicationConnections_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionWaitReplicationConnections, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionWaitReplicationConnections_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionWaitReplicationConnections_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionWaitReplicationConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionWaitReplicationConnections_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionWaitReplicationConnections_Statics::NewProp_WorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionWaitReplicationConnections_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionWaitReplicationConnections>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActionWaitReplicationConnections_Statics::ClassParams = {
		&UActionWaitReplicationConnections::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionWaitReplicationConnections_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionWaitReplicationConnections_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActionWaitReplicationConnections_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionWaitReplicationConnections_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionWaitReplicationConnections()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActionWaitReplicationConnections_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActionWaitReplicationConnections, 1240938857);
	template<> ABP_200508_API UClass* StaticClass<UActionWaitReplicationConnections>()
	{
		return UActionWaitReplicationConnections::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActionWaitReplicationConnections(Z_Construct_UClass_UActionWaitReplicationConnections, &UActionWaitReplicationConnections::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UActionWaitReplicationConnections"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionWaitReplicationConnections);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
