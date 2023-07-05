// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELLeaderboardsQueryUserScoreTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELLeaderboardsQueryUserScoreTask() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLeaderboard_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriend_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUser_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData();
// End Cross Module References
	void UELLeaderboardsQueryUserScoreTask::StaticRegisterNativesUELLeaderboardsQueryUserScoreTask()
	{
	}
	UClass* Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_NoRegister()
	{
		return UELLeaderboardsQueryUserScoreTask::StaticClass();
	}
	struct Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSLeaderboards_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSLeaderboards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSFriend_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSFriend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSUser;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueryUserIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryUserIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueryUserIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryScoreScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QueryScoreScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryStartIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryStartIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryCountPerRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryCountPerRequest;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueriedUserScores_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueriedUserScores_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueriedUserScores;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELLeaderboardsQueryUserScoreTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsQueryUserScoreTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSLeaderboards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardsQueryUserScoreTask" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsQueryUserScoreTask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSLeaderboards = { "EOSLeaderboards", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardsQueryUserScoreTask, EOSLeaderboards), Z_Construct_UClass_UEOSLeaderboard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSLeaderboards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSLeaderboards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSFriend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardsQueryUserScoreTask" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsQueryUserScoreTask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSFriend = { "EOSFriend", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardsQueryUserScoreTask, EOSFriend), Z_Construct_UClass_UEOSFriend_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSFriend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSFriend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardsQueryUserScoreTask" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsQueryUserScoreTask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSUser = { "EOSUser", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardsQueryUserScoreTask, EOSUser), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSUser_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryUserIds_Inner = { "QueryUserIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryUserIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardsQueryUserScoreTask" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsQueryUserScoreTask.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryUserIds = { "QueryUserIds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardsQueryUserScoreTask, QueryUserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryUserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryUserIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryScoreScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardsQueryUserScoreTask" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsQueryUserScoreTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryScoreScale = { "QueryScoreScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardsQueryUserScoreTask, QueryScoreScale), METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryScoreScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryScoreScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryStartIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardsQueryUserScoreTask" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsQueryUserScoreTask.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryStartIndex = { "QueryStartIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardsQueryUserScoreTask, QueryStartIndex), METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryStartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryStartIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardsQueryUserScoreTask" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsQueryUserScoreTask.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryCount = { "QueryCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardsQueryUserScoreTask, QueryCount), METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryCountPerRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardsQueryUserScoreTask" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsQueryUserScoreTask.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryCountPerRequest = { "QueryCountPerRequest", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardsQueryUserScoreTask, QueryCountPerRequest), METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryCountPerRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryCountPerRequest_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueriedUserScores_Inner = { "QueriedUserScores", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueriedUserScores_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardsQueryUserScoreTask" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsQueryUserScoreTask.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueriedUserScores = { "QueriedUserScores", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardsQueryUserScoreTask, QueriedUserScores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueriedUserScores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueriedUserScores_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSLeaderboards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_EOSUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryUserIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryUserIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryScoreScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryStartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueryCountPerRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueriedUserScores_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::NewProp_QueriedUserScores,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELLeaderboardsQueryUserScoreTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::ClassParams = {
		&UELLeaderboardsQueryUserScoreTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELLeaderboardsQueryUserScoreTask, 195798205);
	template<> ABP_200508_API UClass* StaticClass<UELLeaderboardsQueryUserScoreTask>()
	{
		return UELLeaderboardsQueryUserScoreTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELLeaderboardsQueryUserScoreTask(Z_Construct_UClass_UELLeaderboardsQueryUserScoreTask, &UELLeaderboardsQueryUserScoreTask::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELLeaderboardsQueryUserScoreTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELLeaderboardsQueryUserScoreTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
