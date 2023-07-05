// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSManagerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSManagerActor() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSManagerActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSManagerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSManagerActorInterface_NoRegister();
// End Cross Module References
	void AELSSManagerActor::StaticRegisterNativesAELSSManagerActor()
	{
	}
	UClass* Z_Construct_UClass_AELSSManagerActor_NoRegister()
	{
		return AELSSManagerActor::StaticClass();
	}
	struct Z_Construct_UClass_AELSSManagerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSManagerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSManagerActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSManagerActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSManagerActor.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSManagerActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSManagerActorInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSManagerActor, IELSSManagerActorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSManagerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSManagerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSManagerActor_Statics::ClassParams = {
		&AELSSManagerActor::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSManagerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSManagerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSManagerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSManagerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSManagerActor, 1907232575);
	template<> ABP_200508_API UClass* StaticClass<AELSSManagerActor>()
	{
		return AELSSManagerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSManagerActor(Z_Construct_UClass_AELSSManagerActor, &AELSSManagerActor::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSManagerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSManagerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
