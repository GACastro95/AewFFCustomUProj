// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELAnimNotifyState_AttachMine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimNotifyState_AttachMine() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELAnimNotifyState_AttachMine_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELAnimNotifyState_AttachMine();
	ELITE_API UClass* Z_Construct_UClass_UELAnimNotifyState_Attach();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	void UELAnimNotifyState_AttachMine::StaticRegisterNativesUELAnimNotifyState_AttachMine()
	{
	}
	UClass* Z_Construct_UClass_UELAnimNotifyState_AttachMine_NoRegister()
	{
		return UELAnimNotifyState_AttachMine::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimNotifyState_AttachMine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimNotifyState_AttachMine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELAnimNotifyState_Attach,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifyState_AttachMine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELAnimNotifyState_AttachMine.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimNotifyState_AttachMine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimNotifyState_AttachMine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimNotifyState_AttachMine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimNotifyState_AttachMine_Statics::ClassParams = {
		&UELAnimNotifyState_AttachMine::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifyState_AttachMine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyState_AttachMine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimNotifyState_AttachMine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimNotifyState_AttachMine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimNotifyState_AttachMine, 1941690673);
	template<> ELITE_API UClass* StaticClass<UELAnimNotifyState_AttachMine>()
	{
		return UELAnimNotifyState_AttachMine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimNotifyState_AttachMine(Z_Construct_UClass_UELAnimNotifyState_AttachMine, &UELAnimNotifyState_AttachMine::StaticClass, TEXT("/Script/ELITE"), TEXT("UELAnimNotifyState_AttachMine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimNotifyState_AttachMine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
