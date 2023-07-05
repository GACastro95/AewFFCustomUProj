// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPoolBlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPoolBlueprintBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPoolBlueprintBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPoolBlueprintBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPoolActorInterface_NoRegister();
// End Cross Module References
	void AELSSPoolBlueprintBase::StaticRegisterNativesAELSSPoolBlueprintBase()
	{
	}
	UClass* Z_Construct_UClass_AELSSPoolBlueprintBase_NoRegister()
	{
		return AELSSPoolBlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSPoolBlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSPoolBlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPoolBlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSPoolBlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPoolBlueprintBase.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSPoolBlueprintBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSPoolActorInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSPoolBlueprintBase, IELSSPoolActorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSPoolBlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSPoolBlueprintBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSPoolBlueprintBase_Statics::ClassParams = {
		&AELSSPoolBlueprintBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSPoolBlueprintBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPoolBlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSPoolBlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSPoolBlueprintBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSPoolBlueprintBase, 3693577283);
	template<> ABP_200508_API UClass* StaticClass<AELSSPoolBlueprintBase>()
	{
		return AELSSPoolBlueprintBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSPoolBlueprintBase(Z_Construct_UClass_AELSSPoolBlueprintBase, &AELSSPoolBlueprintBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSPoolBlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSPoolBlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
