// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveGame_RawData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGame_RawData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveGame_RawData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveGame_RawData();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void USaveGame_RawData::StaticRegisterNativesUSaveGame_RawData()
	{
	}
	UClass* Z_Construct_UClass_USaveGame_RawData_NoRegister()
	{
		return USaveGame_RawData::StaticClass();
	}
	struct Z_Construct_UClass_USaveGame_RawData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_cRawData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cRawData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cRawData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_uRawSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_m_uRawSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_cRawSubData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cRawSubData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cRawSubData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_uRawSubSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_m_uRawSubSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_cTempData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cTempData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cTempData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGame_RawData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGame_RawData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGame_RawData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveGame_RawData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cRawData_Inner = { "m_cRawData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cRawData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveGame_RawData" },
		{ "ModuleRelativePath", "Public/SaveGame_RawData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cRawData = { "m_cRawData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGame_RawData, m_cRawData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cRawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cRawData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_uRawSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveGame_RawData" },
		{ "ModuleRelativePath", "Public/SaveGame_RawData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_uRawSize = { "m_uRawSize", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGame_RawData, m_uRawSize), METADATA_PARAMS(Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_uRawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_uRawSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cRawSubData_Inner = { "m_cRawSubData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cRawSubData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveGame_RawData" },
		{ "ModuleRelativePath", "Public/SaveGame_RawData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cRawSubData = { "m_cRawSubData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGame_RawData, m_cRawSubData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cRawSubData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cRawSubData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_uRawSubSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveGame_RawData" },
		{ "ModuleRelativePath", "Public/SaveGame_RawData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_uRawSubSize = { "m_uRawSubSize", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGame_RawData, m_uRawSubSize), METADATA_PARAMS(Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_uRawSubSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_uRawSubSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cTempData_Inner = { "m_cTempData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cTempData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveGame_RawData" },
		{ "ModuleRelativePath", "Public/SaveGame_RawData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cTempData = { "m_cTempData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGame_RawData, m_cTempData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cTempData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cTempData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGame_RawData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cRawData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cRawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_uRawSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cRawSubData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cRawSubData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_uRawSubSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cTempData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGame_RawData_Statics::NewProp_m_cTempData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGame_RawData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGame_RawData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGame_RawData_Statics::ClassParams = {
		&USaveGame_RawData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGame_RawData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGame_RawData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGame_RawData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGame_RawData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGame_RawData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGame_RawData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGame_RawData, 2297712231);
	template<> ABP_200508_API UClass* StaticClass<USaveGame_RawData>()
	{
		return USaveGame_RawData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGame_RawData(Z_Construct_UClass_USaveGame_RawData, &USaveGame_RawData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveGame_RawData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGame_RawData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
