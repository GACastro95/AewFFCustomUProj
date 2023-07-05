// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSLocator_ItemBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSLocator_ItemBox() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSLocator_ItemBox_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSLocator_ItemBox();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSLocator();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSItemBoxLocatorGroup();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemBox_NoRegister();
// End Cross Module References
	void AELSSLocator_ItemBox::StaticRegisterNativesAELSSLocator_ItemBox()
	{
	}
	UClass* Z_Construct_UClass_AELSSLocator_ItemBox_NoRegister()
	{
		return AELSSLocator_ItemBox::StaticClass();
	}
	struct Z_Construct_UClass_AELSSLocator_ItemBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocatorGroup_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocatorGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocatorGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedItemBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedItemBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSLocator_ItemBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSLocator,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSLocator_ItemBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSLocator_ItemBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSLocator_ItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSLocator_ItemBox_Statics::NewProp_LocatorGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSLocator_ItemBox_Statics::NewProp_LocatorGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLocator_ItemBox" },
		{ "ModuleRelativePath", "Public/ELSSLocator_ItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSLocator_ItemBox_Statics::NewProp_LocatorGroup = { "LocatorGroup", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSLocator_ItemBox, LocatorGroup), Z_Construct_UEnum_ABP_200508_ESSItemBoxLocatorGroup, METADATA_PARAMS(Z_Construct_UClass_AELSSLocator_ItemBox_Statics::NewProp_LocatorGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocator_ItemBox_Statics::NewProp_LocatorGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSLocator_ItemBox_Statics::NewProp_SpawnedItemBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLocator_ItemBox" },
		{ "ModuleRelativePath", "Public/ELSSLocator_ItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSLocator_ItemBox_Statics::NewProp_SpawnedItemBox = { "SpawnedItemBox", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSLocator_ItemBox, SpawnedItemBox), Z_Construct_UClass_AELSSItemBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSLocator_ItemBox_Statics::NewProp_SpawnedItemBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocator_ItemBox_Statics::NewProp_SpawnedItemBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSLocator_ItemBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocator_ItemBox_Statics::NewProp_LocatorGroup_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocator_ItemBox_Statics::NewProp_LocatorGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocator_ItemBox_Statics::NewProp_SpawnedItemBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSLocator_ItemBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSLocator_ItemBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSLocator_ItemBox_Statics::ClassParams = {
		&AELSSLocator_ItemBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELSSLocator_ItemBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocator_ItemBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSLocator_ItemBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocator_ItemBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSLocator_ItemBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSLocator_ItemBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSLocator_ItemBox, 248558025);
	template<> ABP_200508_API UClass* StaticClass<AELSSLocator_ItemBox>()
	{
		return AELSSLocator_ItemBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSLocator_ItemBox(Z_Construct_UClass_AELSSLocator_ItemBox, &AELSSLocator_ItemBox::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSLocator_ItemBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSLocator_ItemBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
