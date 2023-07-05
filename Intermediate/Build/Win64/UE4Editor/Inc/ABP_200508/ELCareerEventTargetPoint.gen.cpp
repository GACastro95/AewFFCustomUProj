// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerEventTargetPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerEventTargetPoint() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerEventTargetPoint_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerEventTargetPoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void AELCareerEventTargetPoint::StaticRegisterNativesAELCareerEventTargetPoint()
	{
	}
	UClass* Z_Construct_UClass_AELCareerEventTargetPoint_NoRegister()
	{
		return AELCareerEventTargetPoint::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerEventTargetPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerEventTargetPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerEventTargetPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerEventTargetPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerEventTargetPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerEventTargetPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerEventTargetPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerEventTargetPoint_Statics::ClassParams = {
		&AELCareerEventTargetPoint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AELCareerEventTargetPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerEventTargetPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerEventTargetPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerEventTargetPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerEventTargetPoint, 3997525506);
	template<> ABP_200508_API UClass* StaticClass<AELCareerEventTargetPoint>()
	{
		return AELCareerEventTargetPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerEventTargetPoint(Z_Construct_UClass_AELCareerEventTargetPoint, &AELCareerEventTargetPoint::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerEventTargetPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerEventTargetPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
