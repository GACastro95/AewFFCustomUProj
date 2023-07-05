// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSAnimNotifyBaseBranchingPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSAnimNotifyBaseBranchingPoint() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELSSAnimNotifyBaseBranchingPoint::StaticRegisterNativesUELSSAnimNotifyBaseBranchingPoint()
	{
	}
	UClass* Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint_NoRegister()
	{
		return UELSSAnimNotifyBaseBranchingPoint::StaticClass();
	}
	struct Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSAnimNotifyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELSSAnimNotifyBaseBranchingPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyBaseBranchingPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSAnimNotifyBaseBranchingPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint_Statics::ClassParams = {
		&UELSSAnimNotifyBaseBranchingPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSAnimNotifyBaseBranchingPoint, 2635405098);
	template<> ABP_200508_API UClass* StaticClass<UELSSAnimNotifyBaseBranchingPoint>()
	{
		return UELSSAnimNotifyBaseBranchingPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSAnimNotifyBaseBranchingPoint(Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint, &UELSSAnimNotifyBaseBranchingPoint::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSAnimNotifyBaseBranchingPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSAnimNotifyBaseBranchingPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
