// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELScoreRankingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELScoreRankingManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELScoreRankingManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELScoreRankingManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray();
// End Cross Module References
	void UELScoreRankingManager::StaticRegisterNativesUELScoreRankingManager()
	{
	}
	UClass* Z_Construct_UClass_UELScoreRankingManager_NoRegister()
	{
		return UELScoreRankingManager::StaticClass();
	}
	struct Z_Construct_UClass_UELScoreRankingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_MatchScoreRankingDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MatchScoreRankingDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_MatchScoreRankingDataList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_MiniGameScoreRankingDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MiniGameScoreRankingDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_MiniGameScoreRankingDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELScoreRankingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELScoreRankingManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELScoreRankingManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELScoreRankingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELScoreRankingManager_Statics::NewProp_m_MatchScoreRankingDataList_Inner = { "m_MatchScoreRankingDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELScoreRankingManager_Statics::NewProp_m_MatchScoreRankingDataList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELScoreRankingManager" },
		{ "ModuleRelativePath", "Public/ELScoreRankingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELScoreRankingManager_Statics::NewProp_m_MatchScoreRankingDataList = { "m_MatchScoreRankingDataList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELScoreRankingManager, m_MatchScoreRankingDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELScoreRankingManager_Statics::NewProp_m_MatchScoreRankingDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELScoreRankingManager_Statics::NewProp_m_MatchScoreRankingDataList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELScoreRankingManager_Statics::NewProp_m_MiniGameScoreRankingDataList_Inner = { "m_MiniGameScoreRankingDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELScoreRankingManager_Statics::NewProp_m_MiniGameScoreRankingDataList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELScoreRankingManager" },
		{ "ModuleRelativePath", "Public/ELScoreRankingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELScoreRankingManager_Statics::NewProp_m_MiniGameScoreRankingDataList = { "m_MiniGameScoreRankingDataList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELScoreRankingManager, m_MiniGameScoreRankingDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELScoreRankingManager_Statics::NewProp_m_MiniGameScoreRankingDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELScoreRankingManager_Statics::NewProp_m_MiniGameScoreRankingDataList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELScoreRankingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELScoreRankingManager_Statics::NewProp_m_MatchScoreRankingDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELScoreRankingManager_Statics::NewProp_m_MatchScoreRankingDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELScoreRankingManager_Statics::NewProp_m_MiniGameScoreRankingDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELScoreRankingManager_Statics::NewProp_m_MiniGameScoreRankingDataList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELScoreRankingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELScoreRankingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELScoreRankingManager_Statics::ClassParams = {
		&UELScoreRankingManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELScoreRankingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELScoreRankingManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELScoreRankingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELScoreRankingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELScoreRankingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELScoreRankingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELScoreRankingManager, 1999771173);
	template<> ABP_200508_API UClass* StaticClass<UELScoreRankingManager>()
	{
		return UELScoreRankingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELScoreRankingManager(Z_Construct_UClass_UELScoreRankingManager, &UELScoreRankingManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELScoreRankingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELScoreRankingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
