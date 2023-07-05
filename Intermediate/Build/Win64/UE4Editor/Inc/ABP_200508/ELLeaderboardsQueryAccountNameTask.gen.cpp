// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELLeaderboardsQueryAccountNameTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELLeaderboardsQueryAccountNameTask() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FExternalAccountIdMap();
// End Cross Module References
	void UELLeaderboardsQueryAccountNameTask::StaticRegisterNativesUELLeaderboardsQueryAccountNameTask()
	{
	}
	UClass* Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_NoRegister()
	{
		return UELLeaderboardsQueryAccountNameTask::StaticClass();
	}
	struct Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequestNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultIdMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultIdMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELLeaderboardsQueryAccountNameTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsQueryAccountNameTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_RequestNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardsQueryAccountNameTask" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsQueryAccountNameTask.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_RequestNum = { "RequestNum", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardsQueryAccountNameTask, RequestNum), METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_RequestNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_RequestNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_bSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardsQueryAccountNameTask" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsQueryAccountNameTask.h" },
	};
#endif
	void Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((UELLeaderboardsQueryAccountNameTask*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELLeaderboardsQueryAccountNameTask), &Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_bSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_ResultIdMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardsQueryAccountNameTask" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsQueryAccountNameTask.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_ResultIdMap = { "ResultIdMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardsQueryAccountNameTask, ResultIdMap), Z_Construct_UScriptStruct_FExternalAccountIdMap, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_ResultIdMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_ResultIdMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_RequestNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::NewProp_ResultIdMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELLeaderboardsQueryAccountNameTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::ClassParams = {
		&UELLeaderboardsQueryAccountNameTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELLeaderboardsQueryAccountNameTask, 2558198324);
	template<> ABP_200508_API UClass* StaticClass<UELLeaderboardsQueryAccountNameTask>()
	{
		return UELLeaderboardsQueryAccountNameTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELLeaderboardsQueryAccountNameTask(Z_Construct_UClass_UELLeaderboardsQueryAccountNameTask, &UELLeaderboardsQueryAccountNameTask::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELLeaderboardsQueryAccountNameTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELLeaderboardsQueryAccountNameTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
