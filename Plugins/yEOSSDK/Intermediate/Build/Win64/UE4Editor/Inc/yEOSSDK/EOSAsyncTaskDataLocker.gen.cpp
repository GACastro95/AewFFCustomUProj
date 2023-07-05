// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAsyncTaskDataLocker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAsyncTaskDataLocker() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAsyncTaskDataLocker_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAsyncTaskDataLocker();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAsyncTask_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSAsyncTaskDataLocker::execCreateAsyncTaskLocker)
	{
		P_GET_OBJECT(UEOSAsyncTask,Z_Param__pcTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSAsyncTaskDataLocker**)Z_Param__Result=UEOSAsyncTaskDataLocker::CreateAsyncTaskLocker(Z_Param__pcTask);
		P_NATIVE_END;
	}
	void UEOSAsyncTaskDataLocker::StaticRegisterNativesUEOSAsyncTaskDataLocker()
	{
		UClass* Class = UEOSAsyncTaskDataLocker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAsyncTaskLocker", &UEOSAsyncTaskDataLocker::execCreateAsyncTaskLocker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker_Statics
	{
		struct EOSAsyncTaskDataLocker_eventCreateAsyncTaskLocker_Parms
		{
			UEOSAsyncTask* _pcTask;
			UEOSAsyncTaskDataLocker* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker_Statics::NewProp__pcTask = { "_pcTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAsyncTaskDataLocker_eventCreateAsyncTaskLocker_Parms, _pcTask), Z_Construct_UClass_UEOSAsyncTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAsyncTaskDataLocker_eventCreateAsyncTaskLocker_Parms, ReturnValue), Z_Construct_UClass_UEOSAsyncTaskDataLocker_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker_Statics::NewProp__pcTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAsyncTaskDataLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAsyncTaskDataLocker, nullptr, "CreateAsyncTaskLocker", nullptr, nullptr, sizeof(EOSAsyncTaskDataLocker_eventCreateAsyncTaskLocker_Parms), Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSAsyncTaskDataLocker_NoRegister()
	{
		return UEOSAsyncTaskDataLocker::StaticClass();
	}
	struct Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSAsyncTaskDataLocker_CreateAsyncTaskLocker, "CreateAsyncTaskLocker" }, // 486833545
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSAsyncTaskDataLocker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSAsyncTaskDataLocker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::NewProp_m_pcTask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAsyncTaskDataLocker" },
		{ "ModuleRelativePath", "Public/EOSAsyncTaskDataLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::NewProp_m_pcTask = { "m_pcTask", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAsyncTaskDataLocker, m_pcTask), Z_Construct_UClass_UEOSAsyncTask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::NewProp_m_pcTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::NewProp_m_pcTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::NewProp_m_pcTask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSAsyncTaskDataLocker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::ClassParams = {
		&UEOSAsyncTaskDataLocker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSAsyncTaskDataLocker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSAsyncTaskDataLocker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSAsyncTaskDataLocker, 1583158026);
	template<> YEOSSDK_API UClass* StaticClass<UEOSAsyncTaskDataLocker>()
	{
		return UEOSAsyncTaskDataLocker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSAsyncTaskDataLocker(Z_Construct_UClass_UEOSAsyncTaskDataLocker, &UEOSAsyncTaskDataLocker::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSAsyncTaskDataLocker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSAsyncTaskDataLocker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
