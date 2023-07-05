// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAnimNotifyState_RopeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimNotifyState_RopeBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimNotifyState_RopeBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimNotifyState_RopeBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimNotifyStateBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELAnimNotifyState_RopeBase::StaticRegisterNativesUELAnimNotifyState_RopeBase()
	{
	}
	UClass* Z_Construct_UClass_UELAnimNotifyState_RopeBase_NoRegister()
	{
		return UELAnimNotifyState_RopeBase::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimNotifyState_RopeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimNotifyState_RopeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELAnimNotifyStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifyState_RopeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELAnimNotifyState_RopeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimNotifyState_RopeBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimNotifyState_RopeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimNotifyState_RopeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimNotifyState_RopeBase_Statics::ClassParams = {
		&UELAnimNotifyState_RopeBase::StaticClass,
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
		0x001130A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifyState_RopeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyState_RopeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimNotifyState_RopeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimNotifyState_RopeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimNotifyState_RopeBase, 2022968306);
	template<> ABP_200508_API UClass* StaticClass<UELAnimNotifyState_RopeBase>()
	{
		return UELAnimNotifyState_RopeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimNotifyState_RopeBase(Z_Construct_UClass_UELAnimNotifyState_RopeBase, &UELAnimNotifyState_RopeBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELAnimNotifyState_RopeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimNotifyState_RopeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
