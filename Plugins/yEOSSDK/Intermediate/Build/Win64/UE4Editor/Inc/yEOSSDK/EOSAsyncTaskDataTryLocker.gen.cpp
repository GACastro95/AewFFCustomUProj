// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAsyncTaskDataTryLocker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAsyncTaskDataTryLocker() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAsyncTaskDataTryLocker();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAsyncTask_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSAsyncTaskDataTryLocker::execCreateAsyncTaskTryLocker)
	{
		P_GET_OBJECT(UEOSAsyncTask,Z_Param__pcTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSAsyncTaskDataTryLocker**)Z_Param__Result=UEOSAsyncTaskDataTryLocker::CreateAsyncTaskTryLocker(Z_Param__pcTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAsyncTaskDataTryLocker::execIsLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocked();
		P_NATIVE_END;
	}
	void UEOSAsyncTaskDataTryLocker::StaticRegisterNativesUEOSAsyncTaskDataTryLocker()
	{
		UClass* Class = UEOSAsyncTaskDataTryLocker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAsyncTaskTryLocker", &UEOSAsyncTaskDataTryLocker::execCreateAsyncTaskTryLocker },
			{ "IsLocked", &UEOSAsyncTaskDataTryLocker::execIsLocked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker_Statics
	{
		struct EOSAsyncTaskDataTryLocker_eventCreateAsyncTaskTryLocker_Parms
		{
			UEOSAsyncTask* _pcTask;
			UEOSAsyncTaskDataTryLocker* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker_Statics::NewProp__pcTask = { "_pcTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAsyncTaskDataTryLocker_eventCreateAsyncTaskTryLocker_Parms, _pcTask), Z_Construct_UClass_UEOSAsyncTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAsyncTaskDataTryLocker_eventCreateAsyncTaskTryLocker_Parms, ReturnValue), Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker_Statics::NewProp__pcTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAsyncTaskDataTryLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAsyncTaskDataTryLocker, nullptr, "CreateAsyncTaskTryLocker", nullptr, nullptr, sizeof(EOSAsyncTaskDataTryLocker_eventCreateAsyncTaskTryLocker_Parms), Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked_Statics
	{
		struct EOSAsyncTaskDataTryLocker_eventIsLocked_Parms
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
	void Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAsyncTaskDataTryLocker_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAsyncTaskDataTryLocker_eventIsLocked_Parms), &Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAsyncTaskDataTryLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAsyncTaskDataTryLocker, nullptr, "IsLocked", nullptr, nullptr, sizeof(EOSAsyncTaskDataTryLocker_eventIsLocked_Parms), Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_NoRegister()
	{
		return UEOSAsyncTaskDataTryLocker::StaticClass();
	}
	struct Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_CreateAsyncTaskTryLocker, "CreateAsyncTaskTryLocker" }, // 609526675
		{ &Z_Construct_UFunction_UEOSAsyncTaskDataTryLocker_IsLocked, "IsLocked" }, // 2050284933
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSAsyncTaskDataTryLocker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSAsyncTaskDataTryLocker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::NewProp_m_pcTask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAsyncTaskDataTryLocker" },
		{ "ModuleRelativePath", "Public/EOSAsyncTaskDataTryLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::NewProp_m_pcTask = { "m_pcTask", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAsyncTaskDataTryLocker, m_pcTask), Z_Construct_UClass_UEOSAsyncTask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::NewProp_m_pcTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::NewProp_m_pcTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::NewProp_m_pcTask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSAsyncTaskDataTryLocker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::ClassParams = {
		&UEOSAsyncTaskDataTryLocker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSAsyncTaskDataTryLocker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSAsyncTaskDataTryLocker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSAsyncTaskDataTryLocker, 147958761);
	template<> YEOSSDK_API UClass* StaticClass<UEOSAsyncTaskDataTryLocker>()
	{
		return UEOSAsyncTaskDataTryLocker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSAsyncTaskDataTryLocker(Z_Construct_UClass_UEOSAsyncTaskDataTryLocker, &UEOSAsyncTaskDataTryLocker::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSAsyncTaskDataTryLocker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSAsyncTaskDataTryLocker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
