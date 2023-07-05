// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPlayerIndicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPlayerIndicator() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELPlayerIndicator_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELPlayerIndicator();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
// End Cross Module References
	void UELPlayerIndicator::StaticRegisterNativesUELPlayerIndicator()
	{
	}
	UClass* Z_Construct_UClass_UELPlayerIndicator_NoRegister()
	{
		return UELPlayerIndicator::StaticClass();
	}
	struct Z_Construct_UClass_UELPlayerIndicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Indicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELPlayerIndicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerIndicator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELPlayerIndicator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerIndicator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Indicator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerIndicator" },
		{ "ModuleRelativePath", "Public/ELPlayerIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Indicator = { "Indicator", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerIndicator, Indicator), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Indicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Indicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_SocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerIndicator" },
		{ "ModuleRelativePath", "Public/ELPlayerIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerIndicator, SocketName), METADATA_PARAMS(Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerIndicator" },
		{ "ModuleRelativePath", "Public/ELPlayerIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerIndicator, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Particle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerIndicator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerIndicator, Particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Particle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Player_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerIndicator" },
		{ "ModuleRelativePath", "Public/ELPlayerIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerIndicator, Player), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELPlayerIndicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Indicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Particle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerIndicator_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELPlayerIndicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELPlayerIndicator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELPlayerIndicator_Statics::ClassParams = {
		&UELPlayerIndicator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELPlayerIndicator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerIndicator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELPlayerIndicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerIndicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELPlayerIndicator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELPlayerIndicator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELPlayerIndicator, 3768910405);
	template<> ABP_200508_API UClass* StaticClass<UELPlayerIndicator>()
	{
		return UELPlayerIndicator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELPlayerIndicator(Z_Construct_UClass_UELPlayerIndicator, &UELPlayerIndicator::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELPlayerIndicator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELPlayerIndicator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
