// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_OnlineInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_OnlineInfo() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_OnlineInfo_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_OnlineInfo();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSaveGameBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSaveData_StatData();
// End Cross Module References
	void USaveData_OnlineInfo::StaticRegisterNativesUSaveData_OnlineInfo()
	{
	}
	UClass* Z_Construct_UClass_USaveData_OnlineInfo_NoRegister()
	{
		return USaveData_OnlineInfo::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_OnlineInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_StatsDataNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_StatsDataNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_StatsDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_StatsDataList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_StickerHistory_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_StickerHistory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_OnlineInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSaveGameBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_OnlineInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_OnlineInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_OnlineInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StatsDataNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_OnlineInfo" },
		{ "ModuleRelativePath", "Public/SaveData_OnlineInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StatsDataNum = { "m_StatsDataNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_OnlineInfo, m_StatsDataNum), METADATA_PARAMS(Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StatsDataNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StatsDataNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StatsDataList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_OnlineInfo" },
		{ "ModuleRelativePath", "Public/SaveData_OnlineInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StatsDataList = { "m_StatsDataList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_StatsDataList, USaveData_OnlineInfo), STRUCT_OFFSET(USaveData_OnlineInfo, m_StatsDataList), Z_Construct_UScriptStruct_FSaveData_StatData, METADATA_PARAMS(Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StatsDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StatsDataList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StickerHistory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_OnlineInfo" },
		{ "ModuleRelativePath", "Public/SaveData_OnlineInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StickerHistory = { "m_StickerHistory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_StickerHistory, USaveData_OnlineInfo), STRUCT_OFFSET(USaveData_OnlineInfo, m_StickerHistory), METADATA_PARAMS(Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StickerHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StickerHistory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_OnlineInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StatsDataNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StatsDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_OnlineInfo_Statics::NewProp_m_StickerHistory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_OnlineInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_OnlineInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_OnlineInfo_Statics::ClassParams = {
		&USaveData_OnlineInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveData_OnlineInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_OnlineInfo_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_OnlineInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_OnlineInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_OnlineInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_OnlineInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_OnlineInfo, 2202083085);
	template<> ABP_200508_API UClass* StaticClass<USaveData_OnlineInfo>()
	{
		return USaveData_OnlineInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_OnlineInfo(Z_Construct_UClass_USaveData_OnlineInfo, &USaveData_OnlineInfo::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_OnlineInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_OnlineInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
