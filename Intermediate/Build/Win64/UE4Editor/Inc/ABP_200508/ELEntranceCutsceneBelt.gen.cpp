// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceCutsceneBelt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceCutsceneBelt() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELEntranceCutsceneBelt_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEntranceCutsceneBelt();
	ABP_200508_API UClass* Z_Construct_UClass_AELEntranceCutsceneWeaponBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneBeltPositionType();
// End Cross Module References
	void AELEntranceCutsceneBelt::StaticRegisterNativesAELEntranceCutsceneBelt()
	{
	}
	UClass* Z_Construct_UClass_AELEntranceCutsceneBelt_NoRegister()
	{
		return AELEntranceCutsceneBelt::StaticClass();
	}
	struct Z_Construct_UClass_AELEntranceCutsceneBelt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachCastID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttachCastID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachBoneName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Position_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELEntranceCutsceneWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEntranceCutsceneBelt.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneBelt.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_AttachCastID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneBelt" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneBelt.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_AttachCastID = { "AttachCastID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneBelt, AttachCastID), METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_AttachCastID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_AttachCastID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_AttachBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneBelt" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneBelt.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_AttachBoneName = { "AttachBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneBelt, AttachBoneName), METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_AttachBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_AttachBoneName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_Position_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_Position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneBelt" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneBelt.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneBelt, Position), Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneBeltPositionType, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_AttachCastID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_AttachBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_Position_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::NewProp_Position,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELEntranceCutsceneBelt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::ClassParams = {
		&AELEntranceCutsceneBelt::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELEntranceCutsceneBelt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELEntranceCutsceneBelt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELEntranceCutsceneBelt, 926424870);
	template<> ABP_200508_API UClass* StaticClass<AELEntranceCutsceneBelt>()
	{
		return AELEntranceCutsceneBelt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELEntranceCutsceneBelt(Z_Construct_UClass_AELEntranceCutsceneBelt, &AELEntranceCutsceneBelt::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELEntranceCutsceneBelt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELEntranceCutsceneBelt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
