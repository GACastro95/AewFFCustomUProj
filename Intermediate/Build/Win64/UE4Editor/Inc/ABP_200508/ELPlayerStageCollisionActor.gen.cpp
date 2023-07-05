// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPlayerStageCollisionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPlayerStageCollisionActor() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELPlayerStageCollisionActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELPlayerStageCollisionActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void AELPlayerStageCollisionActor::StaticRegisterNativesAELPlayerStageCollisionActor()
	{
	}
	UClass* Z_Construct_UClass_AELPlayerStageCollisionActor_NoRegister()
	{
		return AELPlayerStageCollisionActor::StaticClass();
	}
	struct Z_Construct_UClass_AELPlayerStageCollisionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tran_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tran;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELPlayerStageCollisionActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerStageCollisionActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_Capsule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerStageCollisionActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerStageCollisionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELPlayerStageCollisionActor, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_BoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerStageCollisionActor" },
		{ "ModuleRelativePath", "Public/ELPlayerStageCollisionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELPlayerStageCollisionActor, BoneName), METADATA_PARAMS(Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_Tran_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerStageCollisionActor" },
		{ "ModuleRelativePath", "Public/ELPlayerStageCollisionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_Tran = { "Tran", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELPlayerStageCollisionActor, Tran), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_Tran_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_Tran_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_Capsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::NewProp_Tran,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELPlayerStageCollisionActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::ClassParams = {
		&AELPlayerStageCollisionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELPlayerStageCollisionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELPlayerStageCollisionActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELPlayerStageCollisionActor, 3400838084);
	template<> ABP_200508_API UClass* StaticClass<AELPlayerStageCollisionActor>()
	{
		return AELPlayerStageCollisionActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELPlayerStageCollisionActor(Z_Construct_UClass_AELPlayerStageCollisionActor, &AELPlayerStageCollisionActor::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELPlayerStageCollisionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELPlayerStageCollisionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
