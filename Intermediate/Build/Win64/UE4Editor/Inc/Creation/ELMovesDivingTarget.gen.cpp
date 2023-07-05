// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesDivingTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesDivingTarget() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_AELMovesDivingTarget_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_AELMovesDivingTarget();
	CREATION_API UClass* Z_Construct_UClass_AELMovesPlayerPosition();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	void AELMovesDivingTarget::StaticRegisterNativesAELMovesDivingTarget()
	{
	}
	UClass* Z_Construct_UClass_AELMovesDivingTarget_NoRegister()
	{
		return AELMovesDivingTarget::StaticClass();
	}
	struct Z_Construct_UClass_AELMovesDivingTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELMovesDivingTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELMovesPlayerPosition,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMovesDivingTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "ELMovesDivingTarget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMovesDivingTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELMovesDivingTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELMovesDivingTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELMovesDivingTarget_Statics::ClassParams = {
		&AELMovesDivingTarget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELMovesDivingTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesDivingTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELMovesDivingTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELMovesDivingTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELMovesDivingTarget, 4249579039);
	template<> CREATION_API UClass* StaticClass<AELMovesDivingTarget>()
	{
		return AELMovesDivingTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELMovesDivingTarget(Z_Construct_UClass_AELMovesDivingTarget, &AELMovesDivingTarget::StaticClass, TEXT("/Script/Creation"), TEXT("AELMovesDivingTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELMovesDivingTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
