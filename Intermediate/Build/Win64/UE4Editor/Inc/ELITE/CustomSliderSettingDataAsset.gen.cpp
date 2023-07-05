// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/CustomSliderSettingDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomSliderSettingDataAsset() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UCustomSliderSettingDataAsset_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UCustomSliderSettingDataAsset();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELDataAsset();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EUnit();
// End Cross Module References
	void UCustomSliderSettingDataAsset::StaticRegisterNativesUCustomSliderSettingDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UCustomSliderSettingDataAsset_NoRegister()
	{
		return UCustomSliderSettingDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaugeResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GaugeResolution;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UnitType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UnitType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomSliderSettingDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CustomSliderSettingDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_GaugeResolution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomSliderSettingDataAsset" },
		{ "ModuleRelativePath", "Public/CustomSliderSettingDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_GaugeResolution = { "GaugeResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomSliderSettingDataAsset, GaugeResolution), METADATA_PARAMS(Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_GaugeResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_GaugeResolution_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_Keys_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomSliderSettingDataAsset" },
		{ "ModuleRelativePath", "Public/CustomSliderSettingDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomSliderSettingDataAsset, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_UnitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_UnitType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomSliderSettingDataAsset" },
		{ "ModuleRelativePath", "Public/CustomSliderSettingDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_UnitType = { "UnitType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomSliderSettingDataAsset, UnitType), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_UnitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_UnitType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_GaugeResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_UnitType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::NewProp_UnitType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomSliderSettingDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::ClassParams = {
		&UCustomSliderSettingDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomSliderSettingDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomSliderSettingDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomSliderSettingDataAsset, 3092152458);
	template<> ELITE_API UClass* StaticClass<UCustomSliderSettingDataAsset>()
	{
		return UCustomSliderSettingDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomSliderSettingDataAsset(Z_Construct_UClass_UCustomSliderSettingDataAsset, &UCustomSliderSettingDataAsset::StaticClass, TEXT("/Script/ELITE"), TEXT("UCustomSliderSettingDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomSliderSettingDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
