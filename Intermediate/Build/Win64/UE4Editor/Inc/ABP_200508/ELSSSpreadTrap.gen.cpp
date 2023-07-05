// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSSpreadTrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSSpreadTrap() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSpreadTrap_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSpreadTrap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AELSSSpreadTrap::StaticRegisterNativesAELSSSpreadTrap()
	{
	}
	UClass* Z_Construct_UClass_AELSSSpreadTrap_NoRegister()
	{
		return AELSSSpreadTrap::StaticClass();
	}
	struct Z_Construct_UClass_AELSSSpreadTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WholeRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WholeRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSSpreadTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSpreadTrap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSSpreadTrap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSSpreadTrap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSpreadTrap_Statics::NewProp_OwnerActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSpreadTrap" },
		{ "ModuleRelativePath", "Public/ELSSSpreadTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSSpreadTrap_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSpreadTrap, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSSpreadTrap_Statics::NewProp_OwnerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSpreadTrap_Statics::NewProp_OwnerActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSpreadTrap_Statics::NewProp_WholeRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSpreadTrap" },
		{ "ModuleRelativePath", "Public/ELSSSpreadTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSSpreadTrap_Statics::NewProp_WholeRadius = { "WholeRadius", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSpreadTrap, WholeRadius), METADATA_PARAMS(Z_Construct_UClass_AELSSSpreadTrap_Statics::NewProp_WholeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSpreadTrap_Statics::NewProp_WholeRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSSpreadTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSpreadTrap_Statics::NewProp_OwnerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSpreadTrap_Statics::NewProp_WholeRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSSpreadTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSSpreadTrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSSpreadTrap_Statics::ClassParams = {
		&AELSSSpreadTrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELSSSpreadTrap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSpreadTrap_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSSpreadTrap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSpreadTrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSSpreadTrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSSpreadTrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSSpreadTrap, 3580843525);
	template<> ABP_200508_API UClass* StaticClass<AELSSSpreadTrap>()
	{
		return AELSSSpreadTrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSSpreadTrap(Z_Construct_UClass_AELSSSpreadTrap, &AELSSSpreadTrap::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSSpreadTrap"), false, nullptr, nullptr, nullptr);

	void AELSSSpreadTrap::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OwnerActor(TEXT("OwnerActor"));
		static const FName Name_WholeRadius(TEXT("WholeRadius"));

		const bool bIsValid = true
			&& Name_OwnerActor == ClassReps[(int32)ENetFields_Private::OwnerActor].Property->GetFName()
			&& Name_WholeRadius == ClassReps[(int32)ENetFields_Private::WholeRadius].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSSpreadTrap"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSSpreadTrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
